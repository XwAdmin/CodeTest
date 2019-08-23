import sys
from PyQt4 import QtGui,QtCore


class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.resize(500,240)
        self.setWindowTitle("进度条控制小车行驶")

        self.sl = QtGui.QSlider(QtCore.Qt.Horizontal,self)
        self.sl.setMaximum(4) # 设置最大值
        self.sl.setMinimum(1) # 设置最小值
        self.sl.setPageStep(1) # 设置翻页步长，也就是滑轮增加的值
        self.connect(self.sl,QtCore.SIGNAL("valueChanged(int)"),self.car)

        self.label = QtGui.QLabel(self)
        self.label.setPixmap(QtGui.QPixmap("./img_car/01.png"))

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.label)
        vbox.addWidget(self.sl)
        self.setLayout(vbox)

    def car(self,value):
        img = "".join(["./img_car/0" ,str(value) , ".png"])
        self.label.setPixmap(QtGui.QPixmap(img))




if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())