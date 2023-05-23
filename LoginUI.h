#ifndef LOGINUI_H
#define LOGINUI_H

#include <iostream>
//  boundary클래스 정의
class LoginUI
{
    private:
        Login *login;
    public:
        void showLoginProcess(Login *login); 
};
       
#endif