import sys
from PyQt4 import QtGui,QtCore


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("输入框")
        self.resize(300,200)

        self.button1 = QtGui.QPushButton("设置字体",self)
        self.connect(self.button1,QtCore.SIGNAL("clicked()"),self.showFont)
        self.textedit1 = QtGui.QTextEdit(self)

        hbox = QtGui.QHBoxLayout()
        hbox.addStretch(1)
        hbox.addWidget(self.button1)

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.textedit1)
        vbox.addLayout(hbox)

        self.setLayout(vbox)

    def showFont(self):
        font,result = QtGui.QFontDialog().getFont()
        if result:
            self.textedit1.setFont(font)

if __name__ =="__main__":
    app = QtGui.QApplication(sys.argv)
    w  =UI()
    w.show()
    sys.exit(app.exec_())
