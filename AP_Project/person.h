#ifndef PERSON_H
#define PERSON_H
#include <QString>
#include <iostream>
#include <time.h>
#include <vector>
#include <map>
#include <fstream>
#include <exception>
#include <functional>
#include <algorithm>
#include<QJsonObject>
using namespace std;
class log
{
    QString person_ID;
    tm IO_time;
    bool status;
public:
    void read(QJsonObject& json){
        person_ID=json["person_ID"].toString();
        QJsonObject date;
        date=json["birth_date"].toObject();
        IO_time.tm_year=date["year"].toInt();
        IO_time.tm_mon=date["month"].toInt();
        IO_time.tm_mday=date["day"].toInt();
        IO_time.tm_hour=date["hour"].toInt();
        IO_time.tm_min=date["minute"].toInt();
        IO_time.tm_sec=date["second"].toInt();
        status=json["status"].toBool();
    }
    void write(QJsonObject& json){
        json["person_ID"]=person_ID;
        QJsonObject date;
        date["year"]=IO_time.tm_year;
        date["month"]=IO_time.tm_mon;
        date["day"]=IO_time.tm_mday;
        date["hour"]=IO_time.tm_hour;
        date["minute"]=IO_time.tm_min;
        date["second"]=IO_time.tm_sec;
        json["birth_date"]=date;
        json["status"]=status;
    }
    QString get_person_ID(){return person_ID;}
};
enum class PEX{
    BADUSERNAME,
    BADPASSWORD
};

class personException:public exception{
public:
    PEX type;
    personException& operator()(PEX _type){
        type=_type;
        return *this;
    }
};

class person{
protected:
    QString ID;
    QString name;
    tm birth_date;
    bool status;
    QString username;
    size_t password;
    double balance;
public:
    person();
    person(QString _name,tm _birth_date,QString _username,QString _password);
    QString get_id();
    QString get_user();
    size_t get_pass();
};

#endif
