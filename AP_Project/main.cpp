#include "ap.h"
#include"login.h"
#include <QApplication>
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
    Login w;
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    time_t now;
    time(&now);
    struct tm *t=localtime(&now);
    sign_up_usr("Arian",*t,"arianpotter",1234);
    w.setStyleSheet("border-radius: 5px");
    w.show();

    return a.exec();
}
