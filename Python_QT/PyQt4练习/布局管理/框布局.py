import sys
from PyQt4 import QtGui


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("盒布局")
        self.resize(300,200)

        button_ok = QtGui.QPushButton("ok",self)
        button_no = QtGui.QPushButton("no",self)

        hbox = QtGui.QHBoxLayout()
        hbox.addStretch(1)
        hbox.addWidget(button_ok)
        hbox.addWidget(button_no)

        vbox = QtGui.QVBoxLayout()
        vbox.addStretch(1)
        vbox.addLayout(hbox)

        self.setLayout(vbox)


if __name__ ==  "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())