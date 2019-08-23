import  sys
from PyQt4 import QtGui


class UI (QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("网格布局")
        self.resize(250,150)

        grid = QtGui.QGridLayout()
        self.setLayout(grid)

        names =['7','8','9',
                        '4','5','6',
                        '1','2','3',
                        '0','','.']

        pos = [(x,y) for x in range(4) for y in range(3)]

        for name,poss in zip(names,pos):
            if  name == '':
                continue

            if  name == '0':
                button = QtGui.QPushButton(name, self)
                grid.addWidget(button, *poss,1,2)
                continue

            button = QtGui.QPushButton(name,self)
            grid.addWidget(button,*poss)



if __name__ == "__main__":
    app =QtGui.QApplication(sys.argv)
    w = UI()
    w.show()
    sys.exit(app.exec_())