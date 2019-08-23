import  sys
from PyQt4 import  QtGui,QtCore


class UI (QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("滑动条控制LCD")
        self.resize(300,200)

        lcd = QtGui.QLCDNumber(self)
        sl = QtGui.QSlider(QtCore.Qt.Horizontal,self)

        self.connect(sl,QtCore.SIGNAL("valueChanged(int)"),lcd,QtCore.SLOT("display(int)")) # 方式1
        #sl.valueChanged.connect(lcd.display) # 方式2
        
        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(lcd)
        vbox.addWidget(sl)

        self.setLayout(vbox)




if __name__ ==  "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())