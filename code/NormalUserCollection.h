//중복방지
#pragma once
#include <iostream>
#include "NormalUser.h"

#define MAX_NUMBER_OF_NORMALUSER 50

//NormalUser의 List 화 위한 NormalUserCollection의 정의
class NormalUserCollection 
{
private:
    NormalUser* managedNormalUser[MAX_NUMBER_OF_NORMALUSER];
    int numNormalUser;
    int now;
public:
    NormalUser* findFirst();
    NormalUser* getNext();
    int getSize();
    void addNewNormalUser(string name,int SSN, string id, string pw);
    NormalUser* findNormalUser(string id,string pw);
    NormalUserCollection()
    {
        numNormalUser = 0;
    };
}; 