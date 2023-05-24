//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
using namespace std;
#include "UserList.h"

void UserList::addNewBusinessUsertoList(string name, int businessnumber, string id , string pw)
{
    businessUserCollection->addNewBusinessUser(name,businessnumber,id,pw);
}

void UserList::addNewNormalUsertoList(string name, int ssn, string id, string pw)
{
    normalUserCollection->addNewNormalUser(name,ssn,id,pw);
}

void UserList::dropoutUser()
{
    
}