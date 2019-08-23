import sys
from PyQt4 import QtGui,QtCore


class myButton(QtGui.QPushButton):

    def __init__(self,title,parent):
        super().__init__(title,parent)

    def mouseMoveEvent(self, e):
        if e.buttons() ==QtCore.Qt.RightButton:
            "如果不进行判断的话会所有的鼠标按键都会执行拖动操作"
            self.drag = QtGui.QDrag(self)
            self.drag.setMimeData(QtCore.QMimeData())  # 拖动需要一个QMimeData
            self.drag.start()

        return

class UI (QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("鼠标右键拖动按钮移动")
        self.resize(500,500)

        self.button = myButton("右键拖我",self)

        self.setAcceptDrops(True)

    def dragEnterEvent(self, QDragEnterEvent):
        QDragEnterEvent.accept()

    def dropEvent(self, QDropEvent):
        self.button.move(QDropEvent.pos())


if __name__ =="__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())