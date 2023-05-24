//중복방지
#pragma once
// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class User{
    private:
        string id;
        string pw;
        int nowlogin;
        int permission;
    public:
        User();

        ~User();

        bool checkIDInfo(string pw); //
        void changeLoginState(); //
        void revokePermission(); //

};