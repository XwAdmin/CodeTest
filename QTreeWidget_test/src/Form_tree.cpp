#include "Form_tree.h"

Form_tree::Form_tree(QWidget *parent) : QWidget(parent)
{
    this->setLayout( hbox = new QHBoxLayout );
    hbox->addWidget( tree_ = new QTreeView );
    model = new QStandardItemModel( tree_ );
    tree_->setModel( model );
    this->addItem();
    tree_->expandAll();
    /*信号
     connect(ui.treeWidget,SIGNAL(itemClicked (QTreeWidgetItem *,int)),this,SLOT(OnTreeWidgetClicked(QTreeWidgetItem *,int)));
    connect(ui.treeWidget,SIGNAL(itemPressed (QTreeWidgetItem *,int)),this,SLOT(OnTreeWidgetPressed(QTreeWidgetItem *,int)));
    connect(ui.treeWidget,SIGNAL(itemChanged (QTreeWidgetItem *,int)),this,SLOT(OnTreeWidgetItemChanged(QTreeWidgetItem *,int)));
    */
}

void Form_tree::addItem()
{
    //0
    //1
    //3
    model->setHorizontalHeaderLabels( QStringList()<<"BBX总计：20");
    QList<QStandardItem*> item_root;
    QList<QStandardItem*> item_childen;

    for ( int n = 0; n<9; ++n)
    {
         item_root.append(new QStandardItem( "Car" ) );
         model->appendRow( item_root[n]);
    }
    for ( int n = 0; n<20; ++n)
    {
        item_childen.append(new QStandardItem( QString::number(n+11*99) ) );
        model->item(1)->appendRow( item_childen[n]);
    }
//    foreach (QStandardItem *item__, item)
//    {
//        model->item(0)->appendRow( item__);;
//    }
}
