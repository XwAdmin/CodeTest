from Forms import Ui_Main
from PyQt5.QtWidgets import (QApplication, QWidget, QFileDialog, QDesktopWidget)
from PyQt5.QtGui import (QPixmap, QColor)
from PyQt5.Qt import Qt
import sys, os, re,shutil
from PyQt5 import sip

class Ui(QWidget,Ui_Main.Ui_Form):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

        self.num = str()
        self.Signal_binding()
        self.setLayout(self.horizontalLayout_main)
        self.setMaxSize()

    def setMaxSize(self):
        desktop = QDesktopWidget()
        screen_width = desktop.screenGeometry().width()
        screen_height = desktop.screenGeometry().height()
        self.setFixedSize(screen_width-100, screen_height-80) # 设置最大尺寸

    def setImage(self, num):
        self.label_image.setPixmap(QPixmap("%s%s.jpg"%(self.path, num)))
        self.label_image.setScaledContents(True)
        self.label_region_effect.setPixmap(QPixmap("%s%s_region_effect.png"%(self.path, num)))
        self.label_region_effect.setScaledContents(True)
        # self.label_segment.setPixmap(QPixmap("%s%s_segment.png"%(self.path, num)))
        # self.label_segment.setScaledContents(True)

    def Signal_binding(self):
        self.pushButton_choosePath.clicked.connect(self.choosePath)
        self.pushButton_up.clicked.connect(self.choosePath)
        self.listWidget_dataList.itemClicked.connect(self.listChange)
        self.pushButton_output.clicked.connect(self.outputData)
        self.listWidget_dataList.currentItemChanged.connect(self.listChange)
    
    def choosePath(self):
        filePath = QFileDialog.getExistingDirectory(self, "选择文件夹的目录")
        if filePath:
            filePath = [''.join([filePath,"/"]), filePath][filePath[len(filePath)-1]=="/"] # 自动添加/
            self.path = filePath
            self.lineEdit_fromPath.setText(filePath)
            self.files = os.listdir(filePath)  # 遍历到的所有文件列表
            self.listWidget_dataList.clear()  # 清除列表
            list1 = list()
            for fileName in self.files:
                list1.append(re.findall("\d+", fileName)[0])
                self.listWidget_dataList.addItem(fileName)
            list1 = list(set(list1))
            list1.sort()
            self.listWidget_group.clear()
            for groupNum in list1:
                self.listWidget_group.addItem(groupNum)

    def keyPressEvent(self, event):
        self.lineEdit_fromPath.clearFocus()
        self.listWidget_group.clearFocus()
        self.listWidget_dataList.clearFocus()
        if (event.key() == Qt.Key_Left):
            self.setWindowTitle("zuo")

        elif (event.key() == Qt.Key_Right):
            self.setWindowTitle("you")

        elif (event.key() == Qt.Key_Space):
            self.outputData()

        else:
            return

    def outputData(self):
        newName = "./Data/ToData/"
        filePng = "".join([self.num, ".jpg"])
        fileReg = "".join([self.num, "_region_effect.png"])
        fileSeg = "".join([self.num, "_segment.png"])
        fileJson = "".join([self.num, "_segment.json"])
        shutil.copyfile(os.path.join(self.path, filePng), os.path.join(newName, filePng))
        shutil.copyfile(os.path.join(self.path, fileReg), os.path.join(newName, fileReg))
        shutil.copyfile(os.path.join(self.path, fileSeg), os.path.join(newName, fileSeg))
        shutil.copyfile(os.path.join(self.path, fileJson), os.path.join(newName, fileJson))
        self.setWindowTitle(os.path.join(newName, self.num))

    def listChange(self, item):
        self.num = re.findall("\d+", item.text())[0] # 正则取出编号
        self.setWindowTitle(self.num) # 设置窗口标题
        self.setImage(self.num)
        # for n in range(4):
            # self.listWidget_dataList.item(n).setBackground(QColor('red'))


if __name__ == "__main__":
    app = QApplication(sys.argv)
    form = Ui()
    form.show()
    sys.exit(app.exec_())