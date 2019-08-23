import sys
from PyQt4 import QtGui,QtCore


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.resize(250,120)
        self.setWindowTitle("滑块条与进度条配合")

        self.sl = QtGui.QSlider(QtCore.Qt.Horizontal,self)
        self.sl.setMinimum(1)
        self.sl.setMaximum(100)
        self.connect(self.sl,QtCore.SIGNAL("valueChanged(int)"),self.slTopr)

        self.pr = QtGui.QProgressBar(self)

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.pr)
        vbox.addWidget(self.sl)
        self.setLayout(vbox)

    def slTopr(self,value):
        self.pr.setValue(value)


if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())