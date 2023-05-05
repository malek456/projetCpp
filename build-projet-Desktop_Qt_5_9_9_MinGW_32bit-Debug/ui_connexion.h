/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_connexion
{
public:

    void setupUi(QDialog *connexion)
    {
        if (connexion->objectName().isEmpty())
            connexion->setObjectName(QStringLiteral("connexion"));
        connexion->resize(400, 300);

        retranslateUi(connexion);

        QMetaObject::connectSlotsByName(connexion);
    } // setupUi

    void retranslateUi(QDialog *connexion)
    {
        connexion->setWindowTitle(QApplication::translate("connexion", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class connexion: public Ui_connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
