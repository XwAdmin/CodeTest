import  sys
from PyQt4 import QtGui,QtCore


class UI (QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("QSplitter 简单实用")
        self.resize(800,800)

        hbox = QtGui.QHBoxLayout()

        frame_left = QtGui.QFrame(self) # 创建Frame
        frame_left.setFrameShape(QtGui.QFrame.StyledPanel) # 设置框架为有边框样式

        frame_right = QtGui.QFrame(self)
        frame_right.setFrameShape(QtGui.QFrame.StyledPanel)

        frame_down = QtGui.QFrame(self)
        frame_down.setFrameShape(QtGui.QFrame.StyledPanel)

        s1 = QtGui.QSplitter(QtCore.Qt.Horizontal,self) # 创建可调节的splitter
        s1.addWidget(frame_left) # 添加组件
        s1.addWidget(frame_right)

        s2 = QtGui.QSplitter(QtCore.Qt.Vertical,self)
        s2.addWidget(s1)
        s2.addWidget(frame_down)
        s2.setStretchFactor(0,7) # 修改占比，第一个参数是控件索引，第二个是比例

        button_left  = QtGui.QPushButton("左上",self)
        textEdit_left = QtGui.QTextEdit(self)
        layout_left = QtGui.QVBoxLayout()
        layout_left.addWidget(textEdit_left)
        layout_left.addWidget(button_left)
        frame_left.setLayout(layout_left)

        button_right  = QtGui.QPushButton("右上",self)
        textEdit_right = QtGui.QTextEdit(self)
        layout_right = QtGui.QVBoxLayout()
        layout_right.addWidget(textEdit_right)
        layout_right.addWidget(button_right)
        frame_right.setLayout(layout_right)

        button_down  = QtGui.QPushButton("下",self)
        textEdit_down = QtGui.QTextEdit(self)
        layout_down = QtGui.QVBoxLayout()
        layout_down.addWidget(textEdit_down)
        layout_down.addWidget(button_down)
        frame_down.setLayout(layout_down)

        hbox.addWidget(s2)
        self.setLayout(hbox)

        QtGui.QApplication.setStyle(QtGui.QStyleFactory.create('Cleanlooks')) # 设置控件样式，不然不显示可控边界


if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())