//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
#include "RegisterUI.h"
#include "UserList.h"

//control 클래스 정의
class UserRegister{
    private:
        UserRegisterUI userRegisterUI;
        NormalUserCollection normalUserCollection;
        BusinessUserCollection businessUserCollection;

    public:
        void addBusinessUser(string name, int businessnumber, string id, string pw);
        void addNormalUser(string name, int SSN, string id, string pw);
        void businessRun(BusinessUser* businessuserB);
        void normalRun(NormalUser* currentuserN);
};












/*

// 상수 선언
#define MAX_NUMBER_OF_USERS 1000

int businessnumber;
int ssn;
string companyname;
string name;
string id;
string pw;
User newuser;
User* userlist;
int membernum;
int usernum = 0;
void BusinessRegister(string id, string pw, string name, int businessnumber,User* userlist, int membernum);
void NormalRegister(string id, string pw, string name, int ssn, User* userlist, int membernum);
*/

#endif