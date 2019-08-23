import sys
from PyQt4 import  QtGui,QtCore


class UI (QtGui.QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("复选框实例")
        self.resize(300,250)

        self.cb = QtGui.QCheckBox("复选框",self)
        self.cb.move(120,100)
        self.cb.toggle()
        self.connect(self.cb,QtCore.SIGNAL("stateChanged(int)"),self.cbChange) # 必须要有这个int


        self.statusBar().showMessage("准备就绪")

    def cbChange(self):
        cbs = {"True":"已选中","False":"未选中"}
        self.statusBar().showMessage(''.join(["复选框当前状态：",cbs[str(self.cb.isChecked())]]))

    def keyPressEvent(self, *args, **kwargs):
        '按任意键都可以改变复选框的状态'
        self.cb.toggle()




if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())
