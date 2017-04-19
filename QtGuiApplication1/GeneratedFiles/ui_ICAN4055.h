/********************************************************************************
** Form generated from reading UI file 'ICAN4055.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICAN4055_H
#define UI_ICAN4055_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ICAN4055Class
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *_Start_CAN;
    QPushButton *_Link_CAN;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLabel *label_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *_Change;
    QFrame *line_3;

    void setupUi(QDialog *ICAN4055Class)
    {
        if (ICAN4055Class->objectName().isEmpty())
            ICAN4055Class->setObjectName(QStringLiteral("ICAN4055Class"));
        ICAN4055Class->setWindowModality(Qt::NonModal);
        ICAN4055Class->resize(354, 122);
        ICAN4055Class->setMinimumSize(QSize(354, 122));
        ICAN4055Class->setMaximumSize(QSize(354, 122));
        ICAN4055Class->setContextMenuPolicy(Qt::NoContextMenu);
        gridLayout_2 = new QGridLayout(ICAN4055Class);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        _Start_CAN = new QPushButton(ICAN4055Class);
        _Start_CAN->setObjectName(QStringLiteral("_Start_CAN"));

        horizontalLayout_4->addWidget(_Start_CAN);

        _Link_CAN = new QPushButton(ICAN4055Class);
        _Link_CAN->setObjectName(QStringLiteral("_Link_CAN"));

        horizontalLayout_4->addWidget(_Link_CAN);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        line_2 = new QFrame(ICAN4055Class);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(ICAN4055Class);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(ICAN4055Class);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        label_3 = new QLabel(ICAN4055Class);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(40, 0));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Plain);

        horizontalLayout_6->addWidget(label_3);

        horizontalLayout_6->setStretch(1, 1);

        horizontalLayout_7->addLayout(horizontalLayout_6);

        line = new QFrame(ICAN4055Class);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(ICAN4055Class);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        label_7 = new QLabel(ICAN4055Class);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(40, 0));
        label_7->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(label_7);

        horizontalLayout_3->setStretch(1, 1);

        horizontalLayout_7->addLayout(horizontalLayout_3);


        gridLayout->addLayout(horizontalLayout_7, 0, 1, 1, 1);

        label = new QLabel(ICAN4055Class);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(ICAN4055Class);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(ICAN4055Class);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit->setStyleSheet(QLatin1String("\n"
"background-color: rgb(227, 227, 227);"));
        lineEdit->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_2->addLayout(horizontalLayout);

        _Change = new QPushButton(ICAN4055Class);
        _Change->setObjectName(QStringLiteral("_Change"));

        horizontalLayout_2->addWidget(_Change);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        line_3 = new QFrame(ICAN4055Class);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setWindowModality(Qt::NonModal);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ICAN4055Class);

        QMetaObject::connectSlotsByName(ICAN4055Class);
    } // setupUi

    void retranslateUi(QDialog *ICAN4055Class)
    {
        ICAN4055Class->setWindowTitle(QApplication::translate("ICAN4055Class", "ICAN4055", Q_NULLPTR));
        _Start_CAN->setText(QApplication::translate("ICAN4055Class", "\345\220\257\345\212\250CAN", Q_NULLPTR));
        _Link_CAN->setText(QApplication::translate("ICAN4055Class", "\350\277\236\346\216\2454055", Q_NULLPTR));
        label_2->setText(QApplication::translate("ICAN4055Class", "4055DI\351\200\232\351\201\223\347\212\266\346\200\201:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ICAN4055Class", "0x", Q_NULLPTR));
        label_3->setText(QString());
        label_6->setText(QApplication::translate("ICAN4055Class", "D", Q_NULLPTR));
        label_7->setText(QString());
        label->setText(QApplication::translate("ICAN4055Class", "4055DO\351\200\232\351\201\223\346\216\247\345\210\266:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ICAN4055Class", "0x", Q_NULLPTR));
        _Change->setText(QApplication::translate("ICAN4055Class", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ICAN4055Class: public Ui_ICAN4055Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICAN4055_H
