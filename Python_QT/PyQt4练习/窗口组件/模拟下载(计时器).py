import  sys
from PyQt4 import QtCore,QtGui

class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("模拟下载")
        self.resize(300,100)

        self.pbar = QtGui.QProgressBar(self)
        self.label = QtGui.QLabel("未开始下载",self)
        self.button1 = QtGui.QPushButton("开始下载",self)
        self.connect(self.button1,QtCore.SIGNAL("clicked()"),self.timeFunc)
        self.time = QtCore.QBasicTimer()


        hbox  = QtGui.QHBoxLayout()
        hbox.addStretch(1)
        hbox.addWidget(self.label)
        hbox.addWidget(self.button1)

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.pbar)
        vbox.addLayout(hbox)

        self.setLayout(vbox)

    def timeFunc(self):
        if self.time.isActive():
            self.time.stop()
            self.label.setText("已暂停")
            self.button1.setText("继续下载")
        else:
            if self.sender().text() == "重新下载":
                self.pbar.setValue(0)

            self.time.start(50,self)
            self.button1.setText("暂停")
            self.label.setText("正在下载")

    def timerEvent(self, *args, **kwargs):
        pbrValue = self.pbar.value()
        if pbrValue ==100:
            self.label.setText("下载完成")
            self.button1.setText("重新下载")
            self.time.stop()
        else:
            self.pbar.setValue(pbrValue + 1)


if __name__ == "__main__":
    app =QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())