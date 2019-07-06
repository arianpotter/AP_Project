#include "sale_file.h"
sale_file::sale_file():file(){}
sale_file::~sale_file(){}
sale_file::sale_file(double _commission,QString _manager_ID,have_file* _building,QString _condition):file(_commission,_manager_ID,_building){
    condition=_condition;
}
double sale_file::final_price(){
    return building->total_price()+(commission*building->total_price());
}
void sale_file::read(QJsonObject& json){
    commission=json["commission"].toDouble();
    building_ID=json["building_ID"].toString();
    condition=json["condition"].toString();
    manager_ID=json["manager_ID"].toString();
}
void sale_file::write(QJsonObject& json){
    json["commission"]=commission;
    json["building_ID"]=building_ID;
    json["condition"]=condition;
    json["manager_ID"]=manager_ID;
}