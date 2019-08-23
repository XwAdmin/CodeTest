import sys
from PyQt4 import QtCore,QtGui


class UI(QtGui.QMainWindow):
    def __init__(self):
        super().__init__()

        ico = QtGui.QIcon("ico.ico")

        self.setWindowTitle("菜单栏")
        self.resize(500,500)
        self.setWindowIcon(ico)

        Aexit = QtGui.QAction(ico,"退出",self)
        Aexit.setStatusTip("点击退出窗体")
        Aexit.setShortcut("Ctrl+Q")
        Aexit.connect(Aexit,QtCore.SIGNAL("triggered()"),QtGui.qApp,QtCore.SLOT("quit()"))

        self.statusBar()

        Tools = self.addToolBar("退出")
        Tools.addAction(Aexit)


app = QtGui.QApplication(sys.argv)
w = UI()
w.show()
sys.exit(app.exec_())
