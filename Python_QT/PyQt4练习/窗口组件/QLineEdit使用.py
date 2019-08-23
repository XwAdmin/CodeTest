import  sys
from PyQt4 import QtGui,QtCore


class UI (QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("QLine edit使用")
        self.resize(300,60)

        self.edit = QtGui.QLineEdit(self)
        self.label = QtGui.QLabel(self)

        self.connect(self.edit,QtCore.SIGNAL("textChanged(QString)"),self.setLabel) # 这里要注意这个信号的参数是QString，不是自定义的


        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.label)
        vbox.addWidget(self.edit)
        self.setLayout(vbox)

    def setLabel(self,QStr):
        self.label.setText(QStr)

if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())