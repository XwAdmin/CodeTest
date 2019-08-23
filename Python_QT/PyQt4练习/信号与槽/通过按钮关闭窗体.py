import sys
from PyQt4 import QtGui,QtCore

class UI(QtGui.QWidget):
	def __init__(self):
		super().__init__()

		self.setGeometry(300,300,500,500)
		self.setWindowTitle("关闭窗体")

		button1 = QtGui.QPushButton("关闭",self)
		button1.setGeometry(200,200,120,30)
		button1.setToolTip('点我就可以关闭<font color="red">整个窗口</font>')
		self.connect(button1,QtCore.SIGNAL('clicked()'),QtGui.qApp,QtCore.SLOT("quit()"))
		

app = QtGui.QApplication(sys.argv)
w = UI()
w.show()
sys.exit(app.exec_())
