// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class User{
    private:
        string ID;
        string PW;
        int nowlogin;
        int permission;
    public:
        User();

        ~User();

        void CheckIDInfo();
        void CheckLogin();
        void RevokePermission();
        void UserLogout();   
}