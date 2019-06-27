#ifndef LOGIN_H
#define LOGIN_H

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
#include<QFrame>
class Login : public QWidget
{
    Q_OBJECT
    QLabel *labelUsername;
    QLabel *labelPassword;
    QLabel *userPicture;

    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;

    QPushButton *pushButtonLogin;
    QPushButton *pushButtonCancel;

    QCheckBox *checkBoxShowPassword;

    QVBoxLayout *myVLayout;
    QHBoxLayout *myHLayout;

    QFrame *myFrame;

private slots:
    void setPasswordEchoMode(bool);
public:
    explicit Login(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // LOGIN_H
