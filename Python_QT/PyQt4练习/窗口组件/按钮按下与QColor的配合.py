import sys
from PyQt4 import QtGui,QtCore


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.color = QtGui.QColor(0,0,0)
        self.typeDict = {True:255,False:0}
        self.resize(250,120)
        self.setWindowTitle("RGB - 红绿蓝")

        self.button_red = QtGui.QPushButton("红色",self)
        self.button_red.setCheckable(True)
        self.connect(self.button_red,QtCore.SIGNAL("clicked()"),self.S_red)

        self.button_green = QtGui.QPushButton("绿色", self)
        self.button_green.setCheckable(True)
        self.connect(self.button_green,QtCore.SIGNAL("clicked()"),self.S_green)

        self.button_blue = QtGui.QPushButton("蓝色", self)
        self.button_blue.setCheckable(True)
        self.connect(self.button_blue,QtCore.SIGNAL("clicked()"),self.S_blue)

        self.box = QtGui.QWidget()
        self.box.setStyleSheet("QWidget{background-color:%s}"%self.color.name())

        grid = QtGui.QGridLayout()
        grid.addWidget(self.button_red,0,0)
        grid.addWidget(self.button_green,1,0)
        grid.addWidget(self.button_blue,2,0)
        grid.addWidget(self.box,0,1,3,1)
        self.setLayout(grid)

        QtGui.QApplication.setStyle(QtGui.QStyleFactory.create("cleanlooks"))

    def S_red(self):

        self.color.setRed(self.typeDict[self.sender().isChecked()])
        self.box.setStyleSheet("QWidget{background-color:%s}"%self.color.name())

    def S_green(self):
        self.color.setGreen(self.typeDict[self.sender().isChecked()])
        self.box.setStyleSheet("QWidget{background-color:%s}"%self.color.name())

    def S_blue(self):
        self.color.setBlue(self.typeDict[self.sender().isChecked()])
        self.box.setStyleSheet("QWidget{background-color:%s}"%self.color.name())


if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())