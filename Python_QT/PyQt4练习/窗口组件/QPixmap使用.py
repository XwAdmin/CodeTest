from PyQt4 import QtGui
import  sys

class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("QPixmap的使用")

        img = QtGui.QPixmap("./img_car/01.png") # 提供一个图片路径

        self.label = QtGui.QLabel(self) # 不需要设置标题
        self.label.setPixmap(img)

        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.label)
        self.setLayout(vbox)


if __name__ == "__main__":
    app =QtGui.QApplication(sys.argv)
    w =UI()
    w.show()
    sys.exit(app.exec_())
