/********************************************************************************
** Form generated from reading UI file 'EntityBrowserPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ENTITYBROWSERPANEL_UI_H
#define ENTITYBROWSERPANEL_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "QEditorPanelBox.h"

QT_BEGIN_NAMESPACE

class Ui_EntityBrowserPanel
{
public:
    QGridLayout *gridLayout;
    QEditorPanelBox *qEditorPanelBox;
    QLabel *pLabelName;
    QPushButton *pBtnDeleteSelection;
    QTreeWidget *pTreeEntities;

    void setupUi(QWidget *EntityBrowserPanel)
    {
        if (EntityBrowserPanel->objectName().isEmpty())
            EntityBrowserPanel->setObjectName(QStringLiteral("EntityBrowserPanel"));
        EntityBrowserPanel->resize(340, 810);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EntityBrowserPanel->sizePolicy().hasHeightForWidth());
        EntityBrowserPanel->setSizePolicy(sizePolicy);
        EntityBrowserPanel->setMinimumSize(QSize(0, 200));
        gridLayout = new QGridLayout(EntityBrowserPanel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        qEditorPanelBox = new QEditorPanelBox(EntityBrowserPanel);
        qEditorPanelBox->setObjectName(QStringLiteral("qEditorPanelBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qEditorPanelBox->sizePolicy().hasHeightForWidth());
        qEditorPanelBox->setSizePolicy(sizePolicy1);
        qEditorPanelBox->setMinimumSize(QSize(0, 680));
        qEditorPanelBox->setStyleSheet(QStringLiteral(""));
        pLabelName = new QLabel(qEditorPanelBox);
        pLabelName->setObjectName(QStringLiteral("pLabelName"));
        pLabelName->setGeometry(QRect(100, 50, 151, 20));
        pBtnDeleteSelection = new QPushButton(qEditorPanelBox);
        pBtnDeleteSelection->setObjectName(QStringLiteral("pBtnDeleteSelection"));
        pBtnDeleteSelection->setGeometry(QRect(10, 640, 321, 23));
        pBtnDeleteSelection->setStyleSheet(QLatin1String("		border: 1px solid #222222;\n"
"		border - bottom: 1px solid black;\n"
"		border - radius:0px;\n"
"		background:qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(85, 90, 99, 255), 															 stop:1 rgba(98, 106, 119, 255));\n"
"		text-align:left;\n"
"		padding-left:5px;\n"
"		padding-right:5px;\n"
"		color:#CCCCCC;\n"
"		height:24px;"));
        pTreeEntities = new QTreeWidget(qEditorPanelBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        pTreeEntities->setHeaderItem(__qtreewidgetitem);
        pTreeEntities->setObjectName(QStringLiteral("pTreeEntities"));
        pTreeEntities->setGeometry(QRect(10, 50, 321, 581));
        pTreeEntities->setAlternatingRowColors(true);
        pTreeEntities->setSelectionMode(QAbstractItemView::ExtendedSelection);
        pTreeEntities->setSelectionBehavior(QAbstractItemView::SelectRows);
        pTreeEntities->setSortingEnabled(true);

        gridLayout->addWidget(qEditorPanelBox, 0, 0, 1, 1);


        retranslateUi(EntityBrowserPanel);

        QMetaObject::connectSlotsByName(EntityBrowserPanel);
    } // setupUi

    void retranslateUi(QWidget *EntityBrowserPanel)
    {
        EntityBrowserPanel->setWindowTitle(QApplication::translate("EntityBrowserPanel", "EntityBrowserPanel", 0));
        qEditorPanelBox->setProperty("m_strTitle", QVariant(QApplication::translate("EntityBrowserPanel", "Entity Browser", 0)));
        pLabelName->setText(QString());
        pBtnDeleteSelection->setText(QApplication::translate("EntityBrowserPanel", "[ ! THIS IS UNSAFE ! ] Delete Selection", 0));
    } // retranslateUi

};

namespace Ui {
    class EntityBrowserPanel: public Ui_EntityBrowserPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ENTITYBROWSERPANEL_UI_H