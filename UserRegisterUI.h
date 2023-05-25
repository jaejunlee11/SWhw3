//중복방지
#pragma once

// 헤더 선언
#include <string>
#include <iostream>
#include "UserRegister.h"
using namespace std;

//입출력을 위한 REGISTERUI boundary class 정의
class UserRegisterUI
{
    private:
        UserRegister *userRegister;
    public:
        void newUserRegister(UserRegister *userregister,int choice); //사용자로부터 정보를 입력받아 새로운 회원 가입시킴
};




