#ifndef MONTCARD_H
#define MONTCARD_H

#include <QWidget>
#include <QDialog>

namespace Ui {
    class MontCard;
}

class MontCard : public QWidget
{
    Q_OBJECT

public:
    explicit MontCard(QWidget *parent = 0);
    ~MontCard();

   
private:
    Ui::MontCard *ui;
   

};

#endif // MONTCARD_H

