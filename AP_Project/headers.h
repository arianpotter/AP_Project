#ifndef HEADERS_H
#define HEADERS_H
#include "have_file.h"
#include "building.h"
#include "apartment.h"
#include "villa.h"
#include "north_villa.h"
#include "south_villa.h"
#include "person.h"
#include "user.h"
#include "manager.h"
#include "file.h"
#include "sale_file.h"
#include "rent_file.h"
#include<map>
#include<vector>
#include<QString>
map<QString,user> users; //string -> username
map<QString,manager> managers; //string->username
map<QString,apartment>apartments; //string->ID
map<QString,south_villa>south_villas;//string->ID
map<QString,north_villa>north_villas;//string->ID
map<QString,vector<flat>> flats;//string->ID_apartmant
map<QString,vector<log>> logs;//string->ID log ha
////TODO map<string,vector<flat*>> flats when reading from apartment file                    map<string,vector<log>> logs when reading from persons
#endif // HEADERS_H
