import sys,random
from PyQt4 import QtGui, QtCore


class superProgressBar(QtGui.QWidget):
    def __init__(self,parent):
        super().__init__(parent)
        self.setMinimumSize(100,30) # 设置最小尺寸(w,h)
        self.value = 0 # 初始进度条的值
        self.num = [10,20,30,40,50,60,70,80,90,100] # 显示的标题
        self.connect(self, QtCore.SIGNAL("updateValue(int)"), self.setValue) # 定义一个自己的槽函数

    def setValue(self,value):
        "改变进度条的值"
        if  0<=value and value<=100 :
            self.value = value
            print(self.value)
            self.update()
        return

    def paintEvent(self, QPaintEvent):
        "创建绘画事件"
        painter = QtGui.QPainter()
        painter.begin(self)
        self.draw(painter)
        painter.end()

    def draw(self,painter):
        "真正开始绘画的函数"
        font = QtGui.QFont("微软雅黑",7) # 定义一个小字号的字体
        painter.setFont(font)

        h=self.height()
        w=self.width()
        isok = int(w / 100 * self.value)
        isno = int(w/100*80)

        if self.value >=80:
            painter.setPen(QtCore.Qt.NoPen)
            painter.setBrush(QtGui.QColor(0, 188, 0,150))
            painter.drawRect(0, 0, isno, h)

            painter.setBrush(QtGui.QColor(255, 0, 0,150))
            painter.drawRect(isno, 0, isok-isno, h)

        else:
            painter.setPen(QtCore.Qt.NoPen)
            painter.setBrush(QtGui.QColor(0, 188, 0,150))
            painter.drawRect(0, 0, isok, h)

        step = int(round(w / 10.0))
        painter.setPen(QtGui.QColor(0, 0, 0))

        # 创建刻度和文字
        n = 0
        for s in range(step,step*10,step):
            text = str(self.num[n])
            painter.drawLine(s-1,0,s-1,5) # 创建刻度

            metrics = painter.fontMetrics() # 字符测量
            fontW=metrics.width(text)# 创建文字
            painter.drawText(s-fontW/2,h/2,text) # 进行一些位置的处理
            n += 1

        # 创建外框
        pen = QtGui.QPen(QtGui.QColor(255, 30, 20))
        painter.setPen(pen)
        painter.setBrush(QtCore.Qt. NoBrush )
        painter.drawRect(0,0,w-1,h-1) # 不-1的话会显示不全


    def wheelEvent(self, QWheelEvent):
        '定义滑轮的事件'
        self.setValue(self.value+QWheelEvent.delta()*5/60/2)

class Ui(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle('自定义组件')
        self.resize(500,30)
        self.spb = superProgressBar(self)

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.spb)
        self.setLayout(vbox)


if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)
    w = Ui()
    w.show()
    sys.exit(app.exec_())