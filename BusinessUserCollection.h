//중복방지
#pragma once
#include <iostream>
#include "BusinessUser.h"

#define MAX_NUMBER_OF_BUSINESSUSER 50
class BusinessUserCollection 
{
private:
    BusinessUser* managedBusinessUser[MAX_NUMBER_OF_BUSINESSUSER];
    int numBusinessUser;
    int now;
public:
    BusinessUser* findFirst();
    BusinessUser* getNext();
    int getSize();
    void addNewBusinessUser(string name,int businessnumber, string id, string pw);
    BusinessUser* findBusinessUser(string id,string pw);
    BusinessUserCollection()
    {
        numBusinessUser = 0;
    };
}; 