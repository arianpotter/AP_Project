#include"file.h"
file::file(){}
file::file(double _commission,QString _manager_ID,have_file* _building){
    if(_commission==0){
        commission=50000;
    }
    else commission=_commission;
    manager_ID=_manager_ID;
    building=_building;
    building_ID=building->get_id();
}
QString file::get_building_ID(){return building_ID;}
QString file::get_manager_ID(){return manager_ID;}

QString file::get_user_ID()
{
    return user_ID;
}

void file::set_user_ID(QString ID)
{
    user_ID=ID;
}

bool file::get_is_accpted()
{
    return isAccepted;
}

void file::set_is_accpted(bool _a)
{
    isAccepted=_a;
}

void file::set_building(have_file * _b)
{
    building=_b;
}

have_file *file::get_building()
{
    return building;
}

double file::get_commission()
{
    return commission;
}

void file::set_commission(double _com)
{
    commission=_com;
}
file::~file(){}
