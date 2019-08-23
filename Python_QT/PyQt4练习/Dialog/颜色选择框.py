import sys
from PyQt4 import QtGui,QtCore


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("颜色选择")
        self.resize(300,200)

        self.button1 = QtGui.QPushButton("选择颜色",self)
        self.connect(self.button1,QtCore.SIGNAL("clicked()"),self.showColorDialog)

        hbox = QtGui.QHBoxLayout()
        hbox.addStretch(1)
        hbox.addWidget(self.button1)

        vbox = QtGui.QVBoxLayout()
        vbox.addStretch(1)
        vbox.addLayout(hbox)

        self.setLayout(vbox)

    def showColorDialog(self):
        color = QtGui.QColorDialog.getColor()
        if color.isValid():
            self.setStyleSheet("UI{background-color:%s}"%color.name())


if __name__ =="__main__":
    app = QtGui.QApplication(sys.argv)
    w  =UI()
    w.show()
    sys.exit(app.exec_())
