import sys
from PyQt4 import QtGui,QtCore

class Button(QtGui.QPushButton):
    def __init__(self,*__args):
        super().__init__(*__args)
        self.setAcceptDrops(True) # 设置可以接受拖入事件

    def dragEnterEvent(self, e):
        "设置接受的类型"
        #判断拖动的数据类型是否是：text/plain # 这两个一组表示一个类型
        #查询方法是：e.mimeData().formats()
        if e.mimeData().hasFormat('text/plain'):
            e.accept()
        else:
            '不符合数据类型不触发'
            e.ignore()

    def dropEvent(self, e):
        "当经过dragEnterEvent处理过后，进行对该数据的操作"
        #self.setText(e.mimeData().text()) # 修改自身标题
        QtGui.QMessageBox.question(self,"提示","你拖入的数据是：%s"%e.mimeData().text())


class UI (QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("简单的获取拖放数据")

        self.label = QtGui.QLabel("拖动编辑框内的数据移动到按钮上，触发拖动事件")
        self.edit = QtGui.QLineEdit('初始文本',self)
        self.edit.setDragEnabled(True)
        self.button = Button("等待接受",self)

        vLayout = QtGui.QVBoxLayout()
        vLayout.addWidget(self.label)
        bLayout = QtGui.QHBoxLayout()
        bLayout.addWidget(self.edit)
        bLayout.addWidget(self.button)
        vLayout.addLayout(bLayout)
        self.setLayout(vLayout)


if __name__ == "__main__":
    app =QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())