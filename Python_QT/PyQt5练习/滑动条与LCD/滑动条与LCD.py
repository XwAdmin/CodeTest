import sys
from PyQt5 import QtCore,QtWidgets

class UI(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("滑动条与LCD")
        self.resize(500,300)

        self.lcd  =QtWidgets.QLCDNumber(self)
        self.sl = QtWidgets.QSlider(QtCore.Qt.Horizontal,self)

        self.sl.valueChanged.connect(self.lcd.display) # pyqt5仅支持槽函数关联

        vbox  = QtWidgets.QVBoxLayout()
        vbox.addWidget(self.lcd)
        vbox.addWidget(self.sl)
        self.setLayout(vbox)

if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())