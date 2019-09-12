#ifndef FRMPLOT_H
#define FRMPLOT_H

#include <QWidget>
#include <QTimer>
#include "qcustomplot.h"

namespace Ui {
class frmPlot;
}

class frmPlot : public QWidget
{
    Q_OBJECT

public:
    explicit frmPlot(QWidget *parent = 0);
    ~frmPlot();

    void setupDemo(int demoIndex);
    void setupQuadraticDemo(QCustomPlot *customPlot);
    void setupSimpleDemo(QCustomPlot *customPlot);
    void setupSincScatterDemo(QCustomPlot *customPlot);
    void setupScatterStyleDemo(QCustomPlot *customPlot);
    void setupLineStyleDemo(QCustomPlot *customPlot);
    void setupScatterPixmapDemo(QCustomPlot *customPlot);
    void setupDateDemo(QCustomPlot *customPlot);
    void setupTextureBrushDemo(QCustomPlot *customPlot);
    void setupMultiAxisDemo(QCustomPlot *customPlot);
    void setupLogarithmicDemo(QCustomPlot *customPlot);
    void setupRealtimeDataDemo(QCustomPlot *customPlot);
    void setupParametricCurveDemo(QCustomPlot *customPlot);
    void setupBarChartDemo(QCustomPlot *customPlot);
    void setupStatisticalDemo(QCustomPlot *customPlot);
    void setupSimpleItemDemo(QCustomPlot *customPlot);
    void setupItemDemo(QCustomPlot *customPlot);
    void ChangeVisible();

private slots:
    void realtimeDataSlot();
    void bracketDataSlot();

    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btn10_clicked();
    void on_btn11_clicked();
    void on_btn12_clicked();
    void on_btn13_clicked();
    void on_btn14_clicked();
    void on_btn15_clicked();
    void on_btn16_clicked();

private:
    Ui::frmPlot *ui;

    QTimer dataTimer;
    QCPItemTracer *itemDemoPhaseTracer;
    int currentDemoIndex;
};

#endif // FRMPLOT_H
