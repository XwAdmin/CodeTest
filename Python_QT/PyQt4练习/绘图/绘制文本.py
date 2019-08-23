import sys
from PyQt4 import QtGui, QtCore

class Ui(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle('绘制文本')
        self.text = "Hello,I am xw\n\tIt'so cool\nBye~"

    def paintEvent(self, QPaintEvent):
        '这个事件在窗体创建时自动就调用了'
        paint = QtGui.QPainter() # 创建画笔
        paint.begin(self) # 开始绘制
        self.DrawText(QPaintEvent,paint) # 托管
        paint.end() # 结束绘制

    def DrawText(self,paintEvent,paint):
        '将画笔托管给此函数，方便管理'
        paint.setFont(QtGui.QFont('微软雅黑',15)) # 给画笔设置字体
        paint.setPen(QtGui.QColor(57,133,255)) # 给画笔设置颜色
        paint.drawText(paintEvent.rect(),QtCore.Qt.AlignCenter,self.text) # 给画笔绘制文本


if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)
    w = Ui()
    w.show()
    sys.exit(app.exec_())