import sys
from PyQt4 import *

app = QtGui.QApplication(sys.argv)
w = QtGui.QWidget()
w.resize(500,500)
w.setWindowTitle("123")
w.show()
sys.exit(app.exec_())
