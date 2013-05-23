#include <QtGui>
#include "gui.h"

//! [constructor and input fields]
Gui::Gui(QWidget *parent)
    : QWidget(parent)
{
    QLabel *nameLabel = new QLabel(tr("Name:"));
    nameLine = new QLineEdit;

    QLabel *addressLabel = new QLabel(tr("Address:"));
    addressText = new QTextEdit;
//! [constructor and input fields]

//! [layout]
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(nameLabel, 0, 0);
    mainLayout->addWidget(nameLine, 0, 1);
    mainLayout->addWidget(addressLabel, 1, 0, Qt::AlignTop);
    mainLayout->addWidget(addressText, 1, 1);
//! [layout]

//![setting the layout]
    setLayout(mainLayout);
    setWindowTitle(tr("Simple Address Book"));
}
//! [setting the layout]

