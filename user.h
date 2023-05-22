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

        void CheckIDInfo();
        void CheckLogin();
        void RevokePermission(string id);
        void UserLogout();   
}