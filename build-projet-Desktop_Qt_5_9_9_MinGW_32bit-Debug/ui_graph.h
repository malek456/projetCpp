/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_graph
{
public:
    QFrame *Frame;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *graph)
    {
        if (graph->objectName().isEmpty())
            graph->setObjectName(QStringLiteral("graph"));
        graph->resize(1271, 731);
        Frame = new QFrame(graph);
        Frame->setObjectName(QStringLiteral("Frame"));
        Frame->setGeometry(QRect(340, 70, 1321, 771));
        horizontalLayout = new QHBoxLayout(Frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        retranslateUi(graph);

        QMetaObject::connectSlotsByName(graph);
    } // setupUi

    void retranslateUi(QDialog *graph)
    {
        graph->setWindowTitle(QApplication::translate("graph", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class graph: public Ui_graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
