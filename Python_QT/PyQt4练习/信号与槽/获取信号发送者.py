import  sys
from PyQt4 import QtCore,QtGui


class UI (QtGui.QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("获取信号发送者")
        self.resize(300,60)

        button1 = QtGui.QPushButton("按钮A",self)
        button1.move(20, 0)
        button2 = QtGui.QPushButton("按钮B",self)
        button2.move(160,0)

        self.connect(button1,QtCore.SIGNAL("clicked()"),self.func)
        self.connect(button2,QtCore.SIGNAL("clicked()"),self.func)

        self.statusBar().showMessage("窗口初始化完毕")

    def func(self):
        s = self.sender()
        self.statusBar().showMessage(''.join([s.text(),"触发了本函数"]))


if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w =UI()
    w.show()
    sys.exit(app.exec_())