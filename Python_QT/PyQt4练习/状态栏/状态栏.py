import sys
from PyQt4 import QtGui,QtCore

class UI(QtGui.QMainWindow):
	def __init__(self):
		super().__init__()

		self.setGeometry(300,300,250,150)
		self.setWindowTitle("状态栏")

		self.statusBar().showMessage("创建窗体完毕")

app = QtGui.QApplication(sys.argv)
w = UI()
w.show()

sys.exit(app.exec_())
