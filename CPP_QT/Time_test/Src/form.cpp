#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    // 配置初始化
    settings = new QSettings ("./Config.ini", QSettings::IniFormat);
    settings->beginGroup("Time");
    allday = settings->value("Day", 0).toInt();
    timeAllDiff = settings->value("Sec", 0).toInt();
//    qDebug() << allday << timeAllDiff;
    settings->endGroup();

    connect( ui->pushButton ,SIGNAL(clicked(bool)), this, SLOT(timetime()) );
    label_template = ui->label_1->text(); //格式化模板

    DateTime_start = QDateTime::currentDateTime(); //开始时间  取现在的时间 需要在软件启动时初始化
//    DateTime_start = DateTime_start.addDays( -10 ); // 减一天 用来测试 计算差
//    DateTime_start = DateTime_start.addMonths( -5 ); // 减一天 用来测试  计算差
//    DateTime_start = DateTime_start.addDays( -4 ); // 减一天 用来测试  计算差
}

void Form::timetime()
{
    QString qstr_template = label_template;
    qstr_template = qstr_template.arg( DateTime_start.toString( "yyyy年M月d日 hh:mm:ss" ) ); // 开始时间格式化

    DateTime_end = QDateTime::currentDateTime(); //结束时间 取现在的时间
    qstr_template = qstr_template.arg( DateTime_end.toString( "yyyy年M月d日 hh:mm:ss" ) ); // 当前时间格式化

    // 求差，然后 秒转日期格式
    timeDiff = DateTime_start.secsTo( DateTime_end ); //计算开始与结束的时间差 单位为秒
    Time_sec.setHMS( 0, 0, 0 ,0 ); //初始化QTime 各项为0
    Time_sec = Time_sec.addSecs(  timeDiff ); //为时间增加秒数 用来将秒转换成可读性强的时间格式

    // 计算时间差是否满足够1天，不够不需要处理，够一天需要取模运算
    day = timeDiff / DAY_SEC; //取出天数
    if ( day )
        timeDiff %= DAY_SEC; //重置时间差为 取出天数后的余数

    qstr_template = qstr_template.arg( day );
    qstr_template = qstr_template.arg( Time_sec.toString("h小时m分钟s秒") );

    qint64 time_temp_diff = timeAllDiff + timeDiff;
    int day_temp = 0;
    if ( time_temp_diff / DAY_SEC != 0 ) //如果不等于0 说明超过1天了 需要对应的做天+1 秒-86400的操作
    {
        day_temp = allday + ( timeAllDiff / DAY_SEC );
        time_temp_diff = timeAllDiff % DAY_SEC;
    }
    qstr_template = qstr_template.arg( day_temp = allday + day );

    // 初始化 历史耗时 用来转换时间的Time
    Time_all_sec.setHMS( 0, 0, 0 ,0 ); //初始化时间为0
    Time_all_sec = Time_all_sec.addSecs( time_temp_diff ); // 此时的time就是时间差转换后的

    qstr_template = qstr_template.arg( Time_all_sec.toString("h小时m分钟s秒") );

    ui->label_1->setText( qstr_template );
}

void Form::toCompote()
{
    QDateTime DateTime_end = QDateTime::currentDateTime(); //结束时间 取现在的时间

    // 求差
    qint64 timeDiff = DateTime_start.secsTo( DateTime_end ); //计算开始与结束的时间差 单位为秒
    int day = timeDiff / DAY_SEC; //取出天数
    if ( day ) // 如果大于0 说明超出一天，需要+day
        timeDiff %= DAY_SEC; //重置时间差为 取出天数后的余数

    timeAllDiff += timeDiff;
    if ( timeAllDiff / DAY_SEC != 0 ) //如果不等于0 说明超过1天了 需要对应的做天+1 秒-86400的操作
    {
        allday += timeAllDiff / DAY_SEC;
        timeAllDiff %= DAY_SEC;
    }
    allday += day;

}

void Form::closeEvent(QCloseEvent *event)
{
    //程序结束后，可以将本次启动的时间 写入配置
    this->toCompote();

    settings->beginGroup("Time");
    settings->setValue("Day", allday );
    settings->setValue("Sec", timeAllDiff );
    settings->endGroup();

    QWidget::closeEvent( event );
}

Form::~Form()
{
    delete ui;
}
