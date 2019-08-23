import sys,random
from PyQt4 import QtGui, QtCore

class Ui(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle('绘制不同样式的线')


    def paintEvent(self, QPaintEvent):
        '这个事件在窗体创建时自动就调用了'
        paint = QtGui.QPainter() # 创建画笔
        paint.begin(self) # 开始绘制
        self.DrawPen(paint) # 托管
        paint.end() # 结束绘制

    def DrawPen(self,paint):
        '将画笔托管给此函数，方便管理'
        pen = QtGui.QPen(QtGui.QColor(0,0,0), 2)

        # 预设样式1
        pen.setStyle(QtCore.Qt.SolidLine) # 实线
        paint.setPen(pen)
        point_start,point_end= (20,20) ,(300,20)
        paint.drawLine(*point_start,*point_end)  # 参数1,2：起始点的坐标，参数3,4：结束点的坐标

        #预设样式2
        pen.setStyle(QtCore.Qt.DotLine) # 虚线
        paint.setPen(pen)
        point_start,point_end= (20,40) ,(300,40)
        paint.drawLine(*point_start,*point_end)

        #预设样式3
        pen.setStyle(QtCore.Qt.DashLine) # 破折号(就是比虚线长一点)
        paint.setPen(pen)
        point_start,point_end= (20,60) ,(300,60)
        paint.drawLine(*point_start,*point_end)

        #预设样式4
        pen.setStyle(QtCore.Qt.DashDotLine) # 破折&虚线的组合循环
        paint.setPen(pen)
        point_start,point_end= (20,80) ,(300,80)
        paint.drawLine(*point_start,*point_end)

        #预设样式5
        pen.setStyle(QtCore.Qt.DashDotDotLine) # 破折号，虚线，虚线一组的循环
        paint.setPen(pen)
        point_start,point_end= (20,100) ,(300,100)
        paint.drawLine(*point_start,*point_end)

        #自定义样式
        pen.setStyle(QtCore.Qt.CustomDashLine) # 自定义样式
        pen.setDashPattern([5, 2, 3, 5]) # 表示5个像素实线，2个空白，3像素实线，5个空白的循环的循环
        paint.setPen(pen)
        point_start,point_end= (20,120) ,(300,120)
        paint.drawLine(*point_start,*point_end)

        self.resize(300+20,120+20)


if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)
    w = Ui()
    w.show()
    sys.exit(app.exec_())