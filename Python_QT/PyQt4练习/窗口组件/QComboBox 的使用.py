import sys
from PyQt4 import QtGui,QtCore


class UI (QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("下拉列表的使用")

        hbox = QtGui.QHBoxLayout()

        self.label = QtGui.QLabel("请选择种族",self)

        self.cbb = QtGui.QComboBox(self)
        for name in ("人族","兽族","不死族","暗夜精灵族"):
            self.cbb.addItem(name)
        self.connect(self.cbb,QtCore.SIGNAL("activated(QString)"),self.choose)

        self.button_ok = QtGui.QPushButton("".join(["确定选择 - ",self.cbb.currentText()]),self)
        self.connect(self.button_ok,QtCore.SIGNAL("clicked()"),self.chooseOk)

        hbox.addWidget(self.label)
        hbox.addWidget(self.cbb)
        hbox.addWidget(self.button_ok)
        hbox.addStretch(1)
        self.setLayout(hbox)


    def choose(self,name):
        self.button_ok.setText("".join(["确定选择 - ",name]))

    def chooseOk(self):
        QtGui.QMessageBox.question(self,"提示",''.join(["您的选择是 ",self.cbb.currentText()]),QtGui.QMessageBox.Yes)


if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())