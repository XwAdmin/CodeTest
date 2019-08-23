from PyQt4 import QtGui
import  sys

class UI(QtGui.QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("QTableWidget")

        self.table = QtGui.QTableWidget(6,4,self) # 创建一个4列6行的列表
        self.table.setHorizontalHeaderLabels(['车种', '标注信息', 'MOT编号']) # 设置表头
        self.table.resizeColumnsToContents() #  根据内容调整列宽
        for temp in range(6):
            name  = QtGui.QTableWidgetItem(str(temp))
            self.table.setItem(temp,0,name)
        self.table.adjustSize()
        vbox = QtGui.QVBoxLayout()
        vbox.addWidget(self.table)
        self.setLayout(vbox)


if __name__ == "__main__":
    app =QtGui.QApplication(sys.argv)
    w =UI()
    w.show()
    sys.exit(app.exec_())

# 1.resizeColumnsToContents();                      根据内容调整列宽
# 2.resizeColumnToContents(int col);               根据内容自动调整给定列宽
# 3.horizontalHeader()->setResizeMode           把给定列设置为给定模式