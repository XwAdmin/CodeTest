import sys
from PyQt4 import QtGui,QtCore

class UI(QtGui.QWidget):
	def __init__(self):
		super().__init__()

		self.setGeometry(100,100,500,500)
		self.setWindowTitle("窗口居中")

		button1 = QtGui.QPushButton("窗口居中",self)
		button1.setGeometry(200,200,120,30)
		button1.setToolTip('<font color="red">点我就可以将窗口移动到屏幕中间</font>')
		button1.clicked.connect(self.setCenter)
	
	def setCenter(self):

		screen = QtGui.QDesktopWidget().screenGeometry()
		size = self.geometry()
		self.move((screen.width()-size.width())/2,(screen.height()-size.height())/2)

app = QtGui.QApplication(sys.argv)
w = UI()
w.show()
sys.exit(app.exec_())
