//중복방지
#pragma once
#include <iostream>
//  boundary클래스 정의
class LoginUI
{
    private:
        Login *login;
    public:
        void showLoginProcess(Login *login); 
};