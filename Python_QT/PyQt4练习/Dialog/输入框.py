import sys
from PyQt4 import QtGui,QtCore


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("输入框")
        self.resize(300,200)

        self.button1 = QtGui.QPushButton("打开输入框",self)
        self.connect(self.button1,QtCore.SIGNAL("clicked()"),self.showInput)
        self.textedit1 = QtGui.QTextEdit(self)

        hbox = QtGui.QHBoxLayout()
        hbox.addStretch(1)
        hbox.addWidget(self.button1)

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.textedit1)
        vbox.addLayout(hbox)

        self.setLayout(vbox)

    def showInput(self):
        text,button_flag = QtGui.QInputDialog().getText(self,"请输入","文本内容：")
        if button_flag and text:
            self.textedit1.setText(text)


if __name__ =="__main__":
    app = QtGui.QApplication(sys.argv)
    w  =UI()
    w.show()
    sys.exit(app.exec_())
