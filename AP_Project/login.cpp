#include "login.h"

void Login::setPasswordEchoMode(bool checked)
{
    if(checked){
        lineEditPassword->setEchoMode(QLineEdit::Normal);
    }else{
        lineEditPassword->setEchoMode(QLineEdit::Password);
    }
}

Login::Login(QWidget *parent) : QWidget(parent)
{
    labelUsername = new QLabel(tr("Username"));
    labelPassword = new QLabel(tr("Password"));
    userPicture = new QLabel;


    pushButtonLogin = new QPushButton(tr("Log in"));
    pushButtonCancel = new QPushButton(tr("Cancel"));

    lineEditUsername = new QLineEdit;

    lineEditPassword = new QLineEdit;
    lineEditPassword->setEchoMode(QLineEdit::Password);


    checkBoxShowPassword = new QCheckBox(tr("Show"));

    //LayOut

    myVLayout = new QVBoxLayout;

    myHLayout = new QHBoxLayout;

    myFrame= new QFrame;

    myHLayout->addWidget(labelPassword,0,Qt::AlignLeft);
    myHLayout->addWidget(checkBoxShowPassword,0,Qt::AlignRight);
    QPixmap pixel(":/icons/resource/icons/login_icon.png");
    userPicture->setPixmap(pixel.scaled(200,200));

    myVLayout->addWidget(userPicture);
    myVLayout->addWidget(labelUsername);
    myVLayout->addWidget(lineEditUsername);
    myVLayout->addLayout(myHLayout);
    myVLayout->addWidget(lineEditPassword);
    myVLayout->addWidget(pushButtonLogin);
    myVLayout->addWidget(pushButtonCancel);
    myVLayout->setSizeConstraint(QLayout::SetFixedSize);

    pushButtonLogin->setStyleSheet("background-color:#b3ffb3;color:#009900;padding:10px;border:1px solid #009900; font-weight:bold;font-family:Serif;margin-top:20px ");
    pushButtonCancel->setStyleSheet("background-color:#ffb3b3;color:#b30000;padding:10px;border:1px solid #b30000; font-weight:bold;font-family:Serif ");
    this->setStyleSheet("background-color:#f2f2f2;");

    myFrame->setLayout(myVLayout);
    myFrame->setStyleSheet("background-color:white;border-radius: 5px;box-shadow: inset 0 1px 1px rgba(255,255,255,0.8), 0 5px 10px rgba(0,0,0,0.5)");
    lineEditUsername->setStyleSheet("background-color:#f2f2f2;color:#595959;padding:10px;border:1px solid #bfbfbf; font-weight:bold;font-family:Serif ");
    lineEditPassword->setStyleSheet("background-color:#f2f2f2;color:#595959;padding:10px;border:1px solid #bfbfbf; font-weight:bold;font-family:Serif ");
    QVBoxLayout * temp = new QVBoxLayout;
    temp->addWidget(myFrame);
    this->setLayout(temp);
    connect(checkBoxShowPassword,SIGNAL(clicked(bool)),this,SLOT(setPasswordEchoMode(bool)));
}
