import  sys
from PyQt4 import  QtGui


class UI (QtGui.QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("简单的创建编辑框")
        self.resize(200,200)

        label1 = QtGui.QLabel("hello",self)
        label1.move(20,20)

        label2 = QtGui.QLabel("你好",self)
        label2.move(40,50)




if __name__ ==  "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())