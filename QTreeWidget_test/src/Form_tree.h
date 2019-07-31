#ifndef FORM_TREE_H
#define FORM_TREE_H

#include <QWidget>
#include <QTreeView>
#include <QStandardItemModel>
#include <QHBoxLayout>
#include <QDebug>


class Form_tree : public QWidget
{
    Q_OBJECT
public:
    explicit Form_tree(QWidget *parent = nullptr);

private:
    QHBoxLayout *hbox;
    QTreeView *tree_;
    QStandardItemModel *model;

    void addItem();

signals:

public slots:
};

#endif // FORM_TREE_H
