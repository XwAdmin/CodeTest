from PyQt4 import QtGui
import  sys

class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("列表")

        listView = QtGui.QListWidget(self)
        for temp in range(6):
            listView.addItem("1")

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(listView)
        self.setLayout(vbox)


if __name__ == "__main__":
    app =QtGui.QApplication(sys.argv)
    w =UI()
    w.show()
    sys.exit(app.exec_())
