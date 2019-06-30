#include "ap.h"
#include"login.h"
#include "register_ui.h"
#include <QApplication>
#include "addnewapartment_ui.h"
#include "headers.h"
bool sign_up_usr(string _name,tm _birth_date,string _username,size_t _password){
    if(users.count(_username)==1){
        return 0;
    }
     user u(_name,_birth_date,_username,_password);
     users[u.get_id()]=u;
     return 1;
}
bool sign_up_mgr(string _name,tm _birth_date,string _username,size_t _password){
    if(managers.count(_username)==1){
        return 0;
    }
    manager m(_name,_birth_date,_username,_password);
     managers[m.get_id()]=m;
     return 1;
}
user& login_usr(string _username,size_t _password){
    if(users.at(_username).get_pass()==_password)return users[_username];
    else throw personEX;
}
manager& login_mgr(string _username,size_t _password){
    if(managers.at(_username).get_pass()==_password)return managers[_username];
    else throw personEX;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AddNewApartment_UI w;
    //fameless
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    /////////////////
    time_t now;
    time(&now);
    struct tm *t=localtime(&now);
    sign_up_usr("Arian",*t,"arianpotter",1234);

    //set the size of windows!its need to change!
    QSize availableSize = qApp->desktop()->availableGeometry().size();
        int width = availableSize.width();
        int height = availableSize.height();
        //qDebug() << "Available dimensions " << width << "x" << height;
        width *= 0.138; // 90% of the screen size
        height *= 0.138; // 90% of the screen size
        //qDebug() << "Computed dimensions " << width << "x" << height;
        QSize newSize( width, height );

        w.setGeometry(
            QStyle::alignedRect(
                Qt::LeftToRight,
                Qt::AlignCenter,
                newSize,
                qApp->desktop()->availableGeometry()
            )
        );


    w.show();

    return a.exec();
}
