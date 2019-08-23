import sys
from PyQt4 import QtGui

class UI(QtGui.QWidget):
	def __init__(self):
		super().__init__()
		self.setGeometry(300,300,500,500)
		self.setWindowTitle("气泡提示")
		self.setToolTip("我是<b>QT窗体</b>,哈哈")
		QtGui.QToolTip.setFont(QtGui.QFont("微软雅黑",15))


app = QtGui.QApplication(sys.argv)
w = UI()
w.show()
sys.exit(app.exec_())
		