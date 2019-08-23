import sys,random
from PyQt4 import QtGui, QtCore

class Ui(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle('绘制不同样式的图案')

    def paintEvent(self, QPaintEvent):
        '这个事件在窗体创建时自动就调用了'
        paint = QtGui.QPainter() # 创建画笔
        paint.begin(self) # 开始绘制
        self.DrawBrush(paint) # 托管
        paint.end() # 结束绘制

    def DrawBrush(self,paint):
        '将画笔托管给此函数，方便管理'
        x ,y=10,10 # 初始坐标
        self.rect_size = [128,128] # 矩形的尺寸
        # --------------------------
        brush = QtGui.QBrush(QtCore.Qt.SolidPattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))

        x += self.rect_size[0]+10
        brush = QtGui.QBrush(QtCore.Qt.Dense1Pattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))

        x += self.rect_size[0] + 10
        brush = QtGui.QBrush(QtCore.Qt.Dense2Pattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))
        #--------------------------
        y += self.rect_size[1] + 10
        x = 10
        brush = QtGui.QBrush(QtCore.Qt.Dense3Pattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))

        x += self.rect_size[0]+10
        brush = QtGui.QBrush(QtCore.Qt.DiagCrossPattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))

        x += self.rect_size[0] + 10
        brush = QtGui.QBrush(QtCore.Qt.Dense5Pattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))
        # --------------------------
        y += self.rect_size[1] + 10
        x = 10
        brush = QtGui.QBrush(QtCore.Qt.Dense6Pattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))

        x += self.rect_size[0]+10
        brush = QtGui.QBrush(QtCore.Qt.HorPattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))

        x += self.rect_size[0] + 10
        brush = QtGui.QBrush(QtCore.Qt.VerPattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))

        #------------------------------------
        y += self.rect_size[1] + 10
        x = 10
        x += self.rect_size[0] + 10
        brush = QtGui.QBrush(QtCore.Qt.BDiagPattern)
        paint.setBrush(brush)
        paint.drawRect(x,y,*(self.rect_size))

        self.resize(self.rect_size[0]*3+50,self.rect_size[1]*4+50) # 设置窗体的尺寸


if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)
    w = Ui()
    w.show()
    sys.exit(app.exec_())