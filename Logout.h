//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
#include "LogoutUI.h"
#include "Logout.h"
#include "UserList.h"
using namespace std;
//  control 클래스 정의
class Logout{
    private:
        LogoutUI logoutUI;
        User *user;
        UserList *userList;        
    public:
        void performLogoutProcess(string id);
        void run(UserList *userList);
};