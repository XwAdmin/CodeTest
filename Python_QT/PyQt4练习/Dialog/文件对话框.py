import sys
from PyQt4 import QtGui,QtCore


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("文件对话框")
        self.resize(300,200)

        self.button1 = QtGui.QPushButton("打开文件",self)
        self.connect(self.button1,QtCore.SIGNAL("clicked()"),self.showFile)
        self.textedit1 = QtGui.QTextEdit(self)

        hbox = QtGui.QHBoxLayout()
        hbox.addStretch(1)
        hbox.addWidget(self.button1)

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.textedit1)
        vbox.addLayout(hbox)

        self.setLayout(vbox)

    def showFile(self):
        filePath  = QtGui.QFileDialog.getOpenFileName(self,"选择你要打开的文件",'.')
        if filePath:
            with open(filePath,"r") as f:
                self.textedit1.setText(f.read())



if __name__ =="__main__":
    app = QtGui.QApplication(sys.argv)
    w  =UI()
    w.show()
    sys.exit(app.exec_())
