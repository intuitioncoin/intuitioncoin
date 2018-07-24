#include "montcard.h"
#include "ui_montcard.h"


MontCard::MontCard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MontCard)
{
    ui->setupUi(this);
}


MontCard::~MontCard()
{
    delete ui;
}


/* Add functional when MontTerminal will release (Q4 2018) */