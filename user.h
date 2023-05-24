//중복방지
#pragma once
// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class User{
    private:
        int nowlogin;
        int permission;
    protected:
        string id;
        string pw;    
    public:
        User();

        ~User();

        bool checkIDInfo(string id, string pw); //
        void changeLoginState(); //
        void revokePermission(); //
        string showid();

};