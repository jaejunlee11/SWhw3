//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
#include "DropoutUI.h"
#include "User.h"
#include "UserList.h"
using namespace std;

// control 클래스 정의
class Dropout{
    private:
        DropoutUI dropoutUI;
        User *user;
        UserList *userList;
    public:
        void deleteUserPermission(string id);
        void run(UserList *userlist);
#endif