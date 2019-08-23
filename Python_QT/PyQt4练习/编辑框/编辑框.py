import  sys
from PyQt4 import  QtGui


class UI (QtGui.QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("简单的创建编辑框")
        self.resize(500,500)

        myTextEdit = QtGui.QTextEdit()
        myTextEdit.setFont(QtGui.QFont("微软雅黑",20))
        self.setCentralWidget(myTextEdit)


if __name__ ==  "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())