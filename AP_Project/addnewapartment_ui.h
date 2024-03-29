#ifndef ADDNEWAPARTMENT_UI_H
#define ADDNEWAPARTMENT_UI_H

#include <QWidget>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include <QLineEdit>
#include<QResource>
#include<QGridLayout>
#include <QLabel>
#include <QCheckBox>
#include <QMouseEvent>
#include<QFrame>
#include <QStyle>
#include <QDesktopWidget>
#include <QApplication>
#include <QDateEdit>
#include <QMimeData>
#include <QDragEnterEvent>
#include <QDebug>
#include <QComboBox>
#include <QGridLayout>
#include <QRadioButton>
#include "apartment.h"
#include "addrent_ui.h"
#include "addsale_ui.h"
#include "manager.h"
class AddNewApartment_UI : public QWidget
{
    Q_OBJECT

    QLabel *labelApartmentArea;
    QLabel *labelBasePrice;
    QLabel *labelNumberOfFloors;
    QLabel *labelAddress;
    QLabel *labelApartmentPicture;
    QLabel *labeNumberOfUnits;
    QLabel *labelDragAndDrop;
    QLabel *labeDragAndDropUnits;
    QLabel *labelElevator;

    QLabel *labelWhichUnit;
    QLabel *labelUnitFloorNumber;
    QLabel *labelUnitNumberOfRooms;
    QLabel *labelUnitArea;
    QLabel *labelUnitPicture;

    QLineEdit *lineEditApartmentArea;
    QLineEdit *lineEditBasePrice;
    QLineEdit *lineEditNumberOfFloors;
    QLineEdit *lineEditAddress;
    QLineEdit *lineEditNumberOfUnits;

    QComboBox *lineEditUnitFloorNumber;
    QLineEdit *lineEditUnitNumberOfRooms;
    QLineEdit *lineEditUnitArea;

    QComboBox *comboBoxWhichUnit;
    QComboBox *comboBoxElevator;

    QPushButton *pushBottonAdd;
    QPushButton *pushBottonCancel;
    QPushButton *pushButtonAddFlat;
    ///////for flat
        QRadioButton *rbtn_sale;
        QRadioButton *rbtn_rent;
        QRadioButton *rbtn_both;
    //////for apartment
        QLabel *labelApplication;
        QRadioButton *rbtn_Commercial;

        QRadioButton *rbtn_Official;
        QRadioButton *rbtn_Normal;

    ///

    QFrame *myFrame;
    QFrame *myFinalFrame;

    QVBoxLayout *myFirstVBoxLayOut;
    QVBoxLayout *mySecondVBoxLayOut;
    QHBoxLayout *myHBoxLayOutBotton;
    QGridLayout *myFinalLayOut;
    QString fileName;
    QString fileName2;
    bool checkp;

    apartment* aptr_p;
    manager& mgr;
    AddSale_UI* sale_input;
    AddRent_UI* rent_input;


    void dragEnterEvent(QDragEnterEvent *e);
    void dropEvent(QDropEvent *e);

public:
    explicit AddNewApartment_UI(manager& mgr,QWidget *parent = nullptr);
    explicit AddNewApartment_UI(manager& mgr,apartment &aptr ,QWidget *parent = nullptr);
    void show();
    void hide();

signals:

public slots:
    void ChangeFrame(const QString &text);
    void RentClicked();
    void SaleClicked();
    void BothClicked();
    void AddClicked();
    void AddFlatClicked();


};

#endif // ADDNEWAPARTMENT_UI_H
