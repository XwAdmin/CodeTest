import sys
from PyQt4 import  QtGui,QtCore

class MyButton(QtGui.QPushButton):
    def __init__(self,text,parent):
        super().__init__(text,parent)


    def mousePressEvent(self, e):
        if e. button()== QtCore.Qt.LeftButton:
            self.setText(str(int(self.text()) +1))
        if e.button() ==QtCore.Qt.MidButton:
            self.setStyleSheet("MyButton{background:#FF0000}")
        if e.button() == 8:
            self.move(self.x()-1,self.y())
        if e.button() == 16:
            self.move(self.x() +1, self.y())

    def mouseMoveEvent(self,e):
        if e.buttons() != QtCore.Qt.RightButton:
            return
        self.move(e.pos() - self.rect().topLeft())
        mimeData = QtCore.QMimeData()


class UI (QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("鼠标的那些事")

        self.label = QtGui.QLabel("鼠标左键单击按钮改变按钮标题 右键拖动 中键改变颜色 侧键改变方向",self)
        self.button = MyButton("1",self)

        # hbox = QtGui.QHBoxLayout()
        # hbox.addWidget(self.label)
        # hbox.addWidget(self.button)
        # self.setLayout(hbox)
        #






if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())
