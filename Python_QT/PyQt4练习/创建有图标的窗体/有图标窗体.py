import sys
from PyQt4 import QtGui

class UI(QtGui.QWidget):
	def __init__(self):
		super().__init__()
		self.setGeometry(300,300,500,500)
		self.setWindowTitle("hello")
		self.setWindowIcon(QtGui.QIcon("ico.ico"))

app = QtGui.QApplication(sys.argv)
w = UI()
w.show()
sys.exit(app.exec_())
		