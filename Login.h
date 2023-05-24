//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
#include "LoginUI.h"
#include "Login.h"
#include "UserList.h"
using namespace std;
// control 클래스 정의
class Login{
    private:
        LoginUI loginUI;
        User *user;
        UserList *userList;

    public:
        void performLoginProcess(string id, string pw);
        void run(UserList *userList);
};
#endif