# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'Ui_Main.ui'
#
# Created by: PyQt5 UI code generator 5.11.2
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName("Form")
        Form.resize(1383, 1026)
        self.horizontalLayoutWidget_2 = QtWidgets.QWidget(Form)
        self.horizontalLayoutWidget_2.setGeometry(QtCore.QRect(10, 20, 1361, 981))
        self.horizontalLayoutWidget_2.setObjectName("horizontalLayoutWidget_2")
        self.horizontalLayout_main = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget_2)
        self.horizontalLayout_main.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_main.setObjectName("horizontalLayout_main")
        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setObjectName("verticalLayout")
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.label = QtWidgets.QLabel(self.horizontalLayoutWidget_2)
        self.label.setObjectName("label")
        self.horizontalLayout.addWidget(self.label)
        self.lineEdit_fromPath = QtWidgets.QLineEdit(self.horizontalLayoutWidget_2)
        self.lineEdit_fromPath.setObjectName("lineEdit_fromPath")
        self.horizontalLayout.addWidget(self.lineEdit_fromPath)
        self.pushButton_choosePath = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.pushButton_choosePath.setObjectName("pushButton_choosePath")
        self.horizontalLayout.addWidget(self.pushButton_choosePath)
        self.verticalLayout.addLayout(self.horizontalLayout)
        self.listWidget_dataList = QtWidgets.QListWidget(self.horizontalLayoutWidget_2)
        self.listWidget_dataList.setObjectName("listWidget_dataList")
        self.verticalLayout.addWidget(self.listWidget_dataList)
        self.horizontalLayout_main.addLayout(self.verticalLayout)
        self.lbox_image = QtWidgets.QVBoxLayout()
        self.lbox_image.setObjectName("lbox_image")
        self.label_image = QtWidgets.QLabel(self.horizontalLayoutWidget_2)
        self.label_image.setObjectName("label_image")
        self.lbox_image.addWidget(self.label_image)
        self.label_region_effect = QtWidgets.QLabel(self.horizontalLayoutWidget_2)
        self.label_region_effect.setObjectName("label_region_effect")
        self.lbox_image.addWidget(self.label_region_effect)
        self.horizontalLayout_main.addLayout(self.lbox_image)
        self.verticalLayout_3 = QtWidgets.QVBoxLayout()
        self.verticalLayout_3.setObjectName("verticalLayout_3")
        self.label_2 = QtWidgets.QLabel(self.horizontalLayoutWidget_2)
        self.label_2.setObjectName("label_2")
        self.verticalLayout_3.addWidget(self.label_2)
        self.listWidget_group = QtWidgets.QListWidget(self.horizontalLayoutWidget_2)
        self.listWidget_group.setObjectName("listWidget_group")
        self.verticalLayout_3.addWidget(self.listWidget_group)
        self.verticalLayout_2 = QtWidgets.QVBoxLayout()
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.pushButton_up = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.pushButton_up.setObjectName("pushButton_up")
        self.verticalLayout_2.addWidget(self.pushButton_up)
        self.pushButton_down = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.pushButton_down.setObjectName("pushButton_down")
        self.verticalLayout_2.addWidget(self.pushButton_down)
        self.pushButton_output = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.pushButton_output.setObjectName("pushButton_output")
        self.verticalLayout_2.addWidget(self.pushButton_output)
        self.verticalLayout_3.addLayout(self.verticalLayout_2)
        self.horizontalLayout_main.addLayout(self.verticalLayout_3)

        self.retranslateUi(Form)
        QtCore.QMetaObject.connectSlotsByName(Form)

    def retranslateUi(self, Form):
        _translate = QtCore.QCoreApplication.translate
        Form.setWindowTitle(_translate("Form", "数据筛选"))
        self.label.setText(_translate("Form", "数据目录"))
        self.pushButton_choosePath.setText(_translate("Form", "选择数据路径"))
        self.label_image.setText(_translate("Form", "image"))
        self.label_region_effect.setText(_translate("Form", "region_effect"))
        self.label_2.setText(_translate("Form", "已分组"))
        self.pushButton_up.setText(_translate("Form", "上一组 [←]"))
        self.pushButton_down.setText(_translate("Form", "下一组[→]"))
        self.pushButton_output.setText(_translate("Form", "筛出[空格]"))

