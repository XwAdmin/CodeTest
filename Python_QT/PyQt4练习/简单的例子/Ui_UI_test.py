# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'UI_test.ui'
#
# Created by: PyQt4 UI code generator 4.11.4
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName(_fromUtf8("Form"))
        Form.resize(442, 468)
        self.verticalLayoutWidget = QtGui.QWidget(Form)
        self.verticalLayoutWidget.setGeometry(QtCore.QRect(140, 210, 160, 211))
        self.verticalLayoutWidget.setObjectName(_fromUtf8("verticalLayoutWidget"))
        self.vbox = QtGui.QVBoxLayout(self.verticalLayoutWidget)
        self.vbox.setObjectName(_fromUtf8("vbox"))
        self.textEdit = QtGui.QTextEdit(self.verticalLayoutWidget)
        self.textEdit.setObjectName(_fromUtf8("textEdit"))
        self.vbox.addWidget(self.textEdit)
        self.button1 = QtGui.QPushButton(self.verticalLayoutWidget)
        self.button1.setFocusPolicy(QtCore.Qt.NoFocus)
        self.button1.setObjectName(_fromUtf8("button1"))
        self.vbox.addWidget(self.button1)

        self.retranslateUi(Form)
        QtCore.QMetaObject.connectSlotsByName(Form)

    def retranslateUi(self, Form):
        Form.setWindowTitle(_translate("Form", "Form", None))
        self.button1.setWhatsThis(_translate("Form", "我是个<b>按钮</b>", None))
        self.button1.setText(_translate("Form", "PushButton", None))

