import re, sys
import ReDebug
from PyQt5.QtWidgets import (QApplication, QWidget,)
from PyQt5.QtGui import QIcon


class Ui_main(QWidget, ReDebug.Ui_Form):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        self.initialize()

    def initialize(self):
        self.signal_binding() # 进行槽函数绑定
        self.setWindowTitle("正则表达式 - 调试工具")
        self.setWindowIcon(QIcon("res/ico.ico"))

    def signal_binding(self):
        "信号绑定"
        self.pushButton_findall.clicked.connect(lambda : self.re_findall(self.textEdit_re.toPlainText(), self.textEdit_info.toPlainText()))
        self.pushButton_search.clicked.connect(lambda : self.re_search(self.textEdit_re.toPlainText(), self.textEdit_info.toPlainText()))
        self.pushButton_match.clicked.connect(lambda : self.re_match(self.textEdit_re.toPlainText(), self.textEdit_info.toPlainText()))
        self.pushButton_sub.clicked.connect(lambda : self.re_sub(self.textEdit_re.toPlainText(), self.textEdit_newText.toPlainText(), self.textEdit_info.toPlainText()))
        self.pushButton_split.clicked.connect(lambda : self.re_split(self.textEdit_re.toPlainText(), self.textEdit_info.toPlainText()))

    def re_sub(self, argv_code, argv_text, argv_newtext):
        "通过re模块的sub来替换"
        try:
            result = re.sub(argv_code, argv_text, argv_newtext)
        except:
            result =  "此正则表达式会导致匹配引擎出错"
            self.textEdit_result.setText(result)
            return

        self.textEdit_result.setText("\n".join(["替换结果：", result]))

    def re_split(self, argv_code, argv_text):
        try:
            result = re.split(argv_code, argv_text)
        except:
            result =  "此正则表达式会导致匹配引擎出错"
            self.textEdit_result.setText(result)
            return

        self.textEdit_result.setText("\n".join(["打断结果%s组："%len(result), str(result)]))

    def re_match(self, argv_code, argv_text):
        "通过re模块的match函数匹配"
        try:
            result = re.match(argv_code, argv_text)
        except Exception:
            result = "此正则表达式会导致匹配引擎出错"
            self.textEdit_result.setText(result)
            return

        if result:
            index = result.span()
            self.textEdit_result.setText("匹配结果：%s\n位置：%s\n长度：%s" % (result.group(), index, index[1] - index[0]))
        else:
            self.textEdit_result.setText("无匹配结果")

    def re_search(self, argv_code, argv_text):
        "通过re模块的search函数匹配"
        try:
            result = re.search(argv_code, argv_text)
        except Exception:
            result = "此正则表达式会导致匹配引擎出错"
            self.textEdit_result.setText(result)
            return

        if result:
            index = result.span()
            self.textEdit_result.setText("匹配结果：%s\n位置：%s\n长度：%s" % (result.group(), index, index[1] - index[0]))
        else:
            self.textEdit_result.setText("无匹配结果")

    def re_findall(self, argv_code, argv_text):
        "通过re模块的findall函数匹配"
        try:
            result = re.findall(argv_code, argv_text)
        except Exception:
            result = "此正则表达式会导致匹配引擎出错"
            self.textEdit_result.setText(result)
            return
        self.textEdit_result.setText("\n".join(["匹配到%s组"%len(result), str(result)]))


if __name__ == "__main__":
    app = QApplication(sys.argv)
    hwd = Ui_main()
    hwd.show()
    sys.exit(app.exec_())
