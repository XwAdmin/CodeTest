import sys
from PyQt4 import QtGui, QtCore


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("通过ESC关闭窗体")
        self.resize(300, 40)

        label1 = QtGui.QLabel("按下ESC键就可以关闭窗口了呢",self)
        label1.move(10,10)

    def keyPressEvent(self, QKeyEvent):
        if QKeyEvent.key() == QtCore.Qt.Key_Escape:
            self.close()

if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())