import sys
from PyQt4 import QtGui,QtCore


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.resize(500,240)


        self.cw = QtGui.QCalendarWidget(self)
        self.cw.setGridVisible(True) # 显示网格
        self.date =self.cw.selectedDate() # 返回PyQt4.QtCore.QDate对象
        self.setWindowTitle(str((self.date.toPyDate()))) # 需要将Date转为str
        self.connect(self.cw,QtCore.SIGNAL("selectionChanged()"),self.showDate)

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.cw)
        self.setLayout(vbox)


    def showDate(self):
        self.date = self.cw.selectedDate()
        self.setWindowTitle(str((self.date.toPyDate())))


if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())
