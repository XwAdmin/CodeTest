import sys,random
from PyQt4 import QtGui, QtCore

class Ui(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle('绘制点')


    def paintEvent(self, QPaintEvent):
        '这个事件在窗体创建时自动就调用了'
        paint = QtGui.QPainter() # 创建画笔
        paint.begin(self) # 开始绘制
        self.DrawPoint(paint) # 托管
        paint.end() # 结束绘制

    def DrawPoint(self,paint):
        '将画笔托管给此函数，方便管理'

        size = self.size() # 读窗体的大小
        for point in range(5000):

            r = random.randint(0,255)
            g =random.randint(0,255)
            b =random.randint(0,255)
            paint.setPen(QtGui.QColor(r, g, b))  # 给画笔设置颜色

            x = random.randint(1,size.width()) # 最大不超过窗体的宽度
            y = random.randint(1,size.height()) # 最大不超过窗体的高度
            paint.drawPoint(x,y)


if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)
    w = Ui()
    w.show()
    sys.exit(app.exec_())