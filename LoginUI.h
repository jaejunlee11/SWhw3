//중복방지
#pragma once
//헤더 선언
#include <iostream>
#include "Login.h"
//  boundary클래스 정의
class LoginUI
{
    private:
        Login *login;
    public:
        void showLoginProcess(Login *login); 
};