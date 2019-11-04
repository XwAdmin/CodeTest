#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <iostream>

#include "../include/rapidjson/document.h"
#include "../include/rapidjson/writer.h"
#include"../include/rapidjson/stringbuffer.h"
#include "../include/rapidjson/pointer.h"

using namespace  rapidjson;

int main( int argc, char **argv )
{
    QCoreApplication app( argc, argv );

    //读文件到DOM
    QFile file( "../Data/Data.json");
    file.open( QFile::ReadOnly );
    QByteArray data = file.readAll();
    file.close();

    #if 0
    //char*
    转换失败的代码
    //    const char *jsonData = data.toStdString().c_str(); //转换失败了。原因未知
    dom.Parse( jsonData ); //解析失败
    #endif

    #if 0
    //可以使用std::string代替
    std::string str = data.toStdString().c_str();
    dom.Parse( str.c_str() ); //解析
    #endif

     //△以上是文件打开和QT读出Char*的命令
    Document dom; //创建dom对象
    dom.Parse( data.toStdString().c_str() ); //解析
    qDebug()<<"is obj:"<<dom.IsObject(); //是否为对象

    // value 构造函数
    Value valueBool(true);    // 调用 Value(bool)
    Value valueInt(-123);    // 调用 Value(int)
    Value valueUn(123u);    // 调用 Value(unsigned)
    Value valueDouble(1.5);     // 调用 Value(double)
    Value valueStr("小威");     // 调用 Value(String)

    //value取值
    qDebug() << valueBool.GetBool();
    qDebug() << valueInt.GetInt();
    qDebug() << valueUn.GetUint();
    qDebug() << valueDouble.GetDouble();
    qDebug() << valueStr.GetString();

    //value设置
    valueStr.SetString("小威666");
    qDebug() << valueStr.GetString();
    valueStr = "小威666 me too";//等价于SetString()
    qDebug() << valueStr.GetString();

    //普通查询
    //建议的是先判断元素存在，再对该元素取值，提高代码健壮
    qDebug() << "是否存在Version元素" <<dom.HasMember("Version");//判断是否有这个成员
    //△ HasMember作为判断数据是否存在的方法，事实上已经对数据进行了一次查找

    qDebug() << "Version的值" <<dom["Version"].GetString();//取值

    qDebug() << "是否存在Data元素：" << dom.HasMember("Data");//判断是否有这个成员
    Value &valueData = dom["Data"];
    qDebug() << "Data是数组吗：" << valueData.IsArray();
    qDebug() << "Data数据大小" <<valueData.Size();//也就是数组的元素总数
    for( SizeType n = 0; n < valueData.Size(); ++n )
    {
        Value &valueData_ = valueData[n];
        qDebug() << n+1 << "是obj吗：" << valueData_.IsObject();

        #if 0
        if ( valueData_.HasMember( "Name" ))
            qDebug() << n << "的Name是" << QString::fromLocal8Bit( valueData_["Name"].GetString() ); //取一个值
        #endif

        for (Value::ConstMemberIterator itr = valueData_.MemberBegin();
            itr != valueData_.MemberEnd(); ++itr)
        {
            qDebug() << QString::fromLocal8Bit( itr->name.GetString() ) << QString::fromLocal8Bit( itr->value.GetString() );
        }

    }

    //Add
    Document dom2;
    dom2.SetObject();//初始化Json文件基于父根类型为Object，也可以设置为Array
    Document::AllocatorType& allocator = dom2.GetAllocator(); //取出分配器来，避免每次都重复调用dom.GetAllocator

    //添加普通数据
    Value valueStr2;
    valueStr2.SetString( "DOM添加测试");
    dom2.AddMember( "添加", valueStr2, allocator );
    qDebug() <<  "添加的数据是否有效：" << dom2.HasMember("添加");
    qDebug() << QString::fromUtf8( dom2["添加"].GetString() ); //默认是UTF8 所以 这里fromUtf8

    //添加复杂数据
    Value value2( kArrayType );//等价创建对象后，再调用 对象.setArray
    for ( SizeType n2 = 0; n2 < 5; ++n2 )
        value2.PushBack( n2, allocator );//添加到数组最后
    value2.PushBack("hello", allocator).PushBack("小威", allocator);//流畅式添加

    dom2.AddMember( "数据", value2, allocator );//需要把数组添加到dom树中

    //添加复杂数据Object
    Value value_obj( kObjectType );//初始化为OBJ Value

    //直接使用流式操作，可添加更复杂的数据，此处列举出普通的键值对格式的OBJ
    value_obj.AddMember( "key", "F1", allocator ).AddMember( "func", "open help doc", allocator );

    dom2.AddMember( "键OBJ", value_obj, allocator );//不论添加什么，最后都必须有dom树的添加操作
    // 输出内容："{\"添加\":\"DOM添加测试\",\"数据：\":[0,1,2,3,4,\"hello\",\"小威\"],\"keyObj\":{\"key\":\"F1\",\"func\":\"open help doc\"}}"

    dom2.AddMember( "Age", Value(18), dom2.GetAllocator() );
    dom2["Age"].SetInt( 16);//使用函数修改
    SizeType age = 11;
    dom2["Age"] = age; //可以直接使用变量

    dom2["添加"].SetString("hello"); //常量 .SetString方法
    dom2["添加"] = "hello2";//常量 直接 = "xxx"
    QString str3 = "你好3";
    dom2["添加"] = StringRef( str3.toStdString().c_str() );//建议使用
    dom2["添加"] = StringRef( str3.replace("3","4").toStdString().c_str() ,3 );//自定义字符长度例子
//    dom2["添加"] = StringRef( str3.toLocal8Bit().data()); //不同情境下 中文会有问题 但可用
//        dom2["添加"] = StringRef( str3.toUtf8().data()); //不同情境下，中文会有问题 但可用

//    dom2["数据"].PopBack();//删除数组内最后一个数组

    dom2["键OBJ"].RemoveAllMembers();
    dom2["键OBJ"].AddMember( "Edit","1",dom2.GetAllocator()).AddMember("Edit2",2,dom2.GetAllocator());
    dom2["键OBJ"].RemoveMember("Edit3");//键存在时，可以直接删除，不存在也不会报错
    dom2["键OBJ"].AddMember("Edit3",123,dom2.GetAllocator());

//    Value &value = dom2["键OBJ"]["Edit"];
//    value = 99.99;

//    dom2["添加"].Swap(dom2["Age"]);

    const Value *valuePoint = GetValueByPointer( dom2, "/键OBJ/Edit" );
    qDebug() << QString::fromLocal8Bit( valuePoint->GetString() );

    const Value &valuePoint2 = GetValueByPointerWithDefault( dom2, "/键OBJ/Edit4", "666");
    qDebug() << QString::fromLocal8Bit( valuePoint2.GetString() );

    const Value &valuePoint3 = GetValueByPointerWithDefault( dom2, "/数据/-", "123");//-号表示Array的最后一个下标
    qDebug() << QString::fromLocal8Bit( valuePoint3.GetString() );

    //输出
    StringBuffer jsonBuffer2;
    Writer<StringBuffer> write2r(jsonBuffer2);
    dom2.Accept(write2r);
    qDebug() << QString::fromUtf8( jsonBuffer2.GetString() );

    return 0;
    //写DOM到文件
    StringBuffer jsonBuffer;
    Writer<StringBuffer> writer(jsonBuffer);
    dom.Accept(writer);
    QFile file2("../Data/Data2.json");
    file2.open( QFile::WriteOnly);
    file2.write(jsonBuffer.GetString());
    file2.close();

    return app.exec();
}
