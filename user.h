//중복방지
#pragma once
// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
//회원 클래스의 정의 (superclass)
class User{
    private:
        int nowlogin;
        int permission;
    protected:
        string id;
        string pw;    
    public:
        User();

        bool checkIDInfo(string id, string pw); //
        void changeLoginState(); //
        void revokePermission(); //
        string showid();

};