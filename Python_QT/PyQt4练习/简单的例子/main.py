import sys

from PyQt4 import QtGui,QtCore
from Ui_UI_test import Ui_Form

class UI(QtGui.QDialog , Ui_Form):
    def __init__(self):
        super().__init__()

        self.setupUi(self)
        self.setAction()

    def setAction(self):
        self.connect(self.button1,QtCore.SIGNAL("clicked()"),self.test)
    def test(self):
        self.setWindowTitle("6666")
        self.setLayout(self.vbox)

if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())