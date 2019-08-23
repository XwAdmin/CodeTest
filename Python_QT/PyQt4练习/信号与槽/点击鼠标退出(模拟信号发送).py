import sys
from PyQt4 import QtCore,QtGui


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("模拟发送信号")
        self.resize(500,500)

        label1 = QtGui.QLabel("点击窗体内的任意位置，程序会结束",self)

        hbox = QtGui.QHBoxLayout()
        hbox.addStretch(1)
        hbox.addWidget(label1)
        hbox.addStretch(1)

        vbox = QtGui.QVBoxLayout()
        vbox.addLayout(hbox)
        self.setLayout(vbox)

        self.connect(self,QtCore.SIGNAL("func666()"),QtCore.SLOT("close()"))

    def mousePressEvent(self, QMouseEvent):
        print("通过鼠标点击窗体关闭")
        self.emit(QtCore.SIGNAL("func666()")) # 模拟发送信号


if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())
