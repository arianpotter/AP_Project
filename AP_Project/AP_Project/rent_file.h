#ifndef RENT_FILE_H
#define RENT_FILE_H
#include "file.h"
class rent:public file{
    int rent_duration;
public:
    long double mortgage_price(){return 0.05*building->total_price();}
    long double rent_price(){return 0.01*building->total_price();}
    long double final_price(){return rent_duration*rent_price()+mortgage_price()+commission*mortgage_price();}

};

#endif // RENT_FILE_H