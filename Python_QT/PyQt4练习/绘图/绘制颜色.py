import sys,random
from PyQt4 import QtGui, QtCore

class Ui(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle('绘制颜色九宫格')

    def paintEvent(self, QPaintEvent):
        '这个事件在窗体创建时自动就调用了'
        paint = QtGui.QPainter() # 创建画笔
        paint.begin(self) # 开始绘制
        self.DrawRect(paint) # 托管
        paint.end() # 结束绘制

    def DrawRect(self,paint):
        '将画笔托管给此函数，方便管理'
        paint.setPen(QtGui.QColor(155,51,25,157)) # 设置pen的颜色，这里相当于边框色
        x ,y=10,10 # 初始坐标
        self.rect_size = [128,128] # 矩形的尺寸

        paint.setBrush(QtGui.QColor(255,0,0,90)) # 设置brush的颜色，这里相当于填充色
        paint.drawRect(x,y,*(self.rect_size)) # 绘制矩形，pen为边框，brush为填充，参数：x,y,width,height
        x += self.rect_size[0]+10
        paint.setBrush(QtGui.QColor(255, 0, 0, 150))
        paint.drawRect(x,y,*(self.rect_size))
        x += self.rect_size[0] + 10
        paint.setBrush(QtGui.QColor(255, 0, 0, 250))
        paint.drawRect(x,y,*(self.rect_size))

        y += self.rect_size[1] + 10
        x = 10
        paint.setBrush(QtGui.QColor(0,255,0,90))
        paint.drawRect(x,y,*(self.rect_size))
        x += self.rect_size[0]+10
        paint.setBrush(QtGui.QColor(0, 255, 0, 150))
        paint.drawRect(x,y,*(self.rect_size))
        x += self.rect_size[0] + 10
        paint.setBrush(QtGui.QColor(0, 255, 0, 250))
        paint.drawRect(x,y,*(self.rect_size))

        y += self.rect_size[1] + 10
        x = 10
        paint.setBrush(QtGui.QColor(0,0,255,90))
        paint.drawRect(x,y,*(self.rect_size))
        x += self.rect_size[0]+10
        paint.setBrush(QtGui.QColor(0, 0, 255, 150))
        paint.drawRect(x,y,*(self.rect_size))
        x += self.rect_size[0] + 10
        paint.setBrush(QtGui.QColor(0, 0, 255, 250))
        paint.drawRect(x,y,*(self.rect_size))

        self.resize(self.rect_size[0]*3+40,self.rect_size[1]*3+40) # 设置窗体的尺寸


if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)
    w = Ui()
    w.show()
    sys.exit(app.exec_())