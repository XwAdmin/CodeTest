import sys
from PyQt4 import QtGui


class UI(QtGui.QWidget):
	def __init__(self):
		super().__init__()
		
		self.setWindowTitle("关闭提醒")
		self.setGeometry(300,300,300,300)

	def closeEvent(self,event):
		reply = QtGui.QMessageBox.question(self, '警告',"确定要退出吗", 
			QtGui.QMessageBox.Yes, QtGui.QMessageBox.No)

		if reply == QtGui.QMessageBox.Yes:
			event.accept()
		else:
			event.ignore()


if __name__ == "__main__" :
	app = QtGui.QApplication(sys.argv)
	w = UI()
	w.show()
	sys.exit(app.exec_())