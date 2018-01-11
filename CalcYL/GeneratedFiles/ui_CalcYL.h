/********************************************************************************
** Form generated from reading UI file 'CalcYL.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCYL_H
#define UI_CALCYL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalcYLClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *GBtn;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *TestNInEdt;
    QPushButton *PushTestBtn;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *TestLab;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *AnsEdt;
    QPushButton *AnsOkBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *TrueAnsLab;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *TimeOutLab;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalcYLClass)
    {
        if (CalcYLClass->objectName().isEmpty())
            CalcYLClass->setObjectName(QStringLiteral("CalcYLClass"));
        CalcYLClass->resize(658, 505);
        centralWidget = new QWidget(CalcYLClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        GBtn = new QPushButton(centralWidget);
        GBtn->setObjectName(QStringLiteral("GBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GBtn->sizePolicy().hasHeightForWidth());
        GBtn->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(GBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        TestNInEdt = new QLineEdit(centralWidget);
        TestNInEdt->setObjectName(QStringLiteral("TestNInEdt"));

        horizontalLayout->addWidget(TestNInEdt);

        PushTestBtn = new QPushButton(centralWidget);
        PushTestBtn->setObjectName(QStringLiteral("PushTestBtn"));

        horizontalLayout->addWidget(PushTestBtn);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        TestLab = new QLabel(groupBox);
        TestLab->setObjectName(QStringLiteral("TestLab"));
        TestLab->setStyleSheet(QStringLiteral("font: 16pt \"AcadEref\";"));

        horizontalLayout_2->addWidget(TestLab);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        AnsEdt = new QLineEdit(centralWidget);
        AnsEdt->setObjectName(QStringLiteral("AnsEdt"));

        horizontalLayout_3->addWidget(AnsEdt);

        AnsOkBtn = new QPushButton(centralWidget);
        AnsOkBtn->setObjectName(QStringLiteral("AnsOkBtn"));

        horizontalLayout_3->addWidget(AnsOkBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        TrueAnsLab = new QLabel(centralWidget);
        TrueAnsLab->setObjectName(QStringLiteral("TrueAnsLab"));

        horizontalLayout_4->addWidget(TrueAnsLab);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        TimeOutLab = new QLabel(centralWidget);
        TimeOutLab->setObjectName(QStringLiteral("TimeOutLab"));

        horizontalLayout_4->addWidget(TimeOutLab);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 2);
        CalcYLClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalcYLClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 26));
        CalcYLClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalcYLClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalcYLClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalcYLClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalcYLClass->setStatusBar(statusBar);

        retranslateUi(CalcYLClass);

        QMetaObject::connectSlotsByName(CalcYLClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalcYLClass)
    {
        CalcYLClass->setWindowTitle(QApplication::translate("CalcYLClass", "CalcYL", Q_NULLPTR));
        GBtn->setText(QString());
        label_2->setText(QApplication::translate("CalcYLClass", "\350\257\267\350\276\223\345\205\245\347\255\224\351\242\230\344\270\252\346\225\260\357\274\232", Q_NULLPTR));
        PushTestBtn->setText(QApplication::translate("CalcYLClass", "\347\224\237\346\210\220", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CalcYLClass", "\347\254\254X\351\242\230", Q_NULLPTR));
        TestLab->setText(QString());
        label_6->setText(QApplication::translate("CalcYLClass", "\350\257\267\344\275\234\347\255\224\357\274\232", Q_NULLPTR));
        AnsOkBtn->setText(QApplication::translate("CalcYLClass", "\347\241\256\350\256\244", Q_NULLPTR));
        TrueAnsLab->setText(QApplication::translate("CalcYLClass", "\346\255\243\347\241\256\347\255\224\346\241\210\346\230\257\357\274\232xxx", Q_NULLPTR));
        label_5->setText(QApplication::translate("CalcYLClass", "\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        TimeOutLab->setText(QApplication::translate("CalcYLClass", "XXS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalcYLClass: public Ui_CalcYLClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCYL_H
