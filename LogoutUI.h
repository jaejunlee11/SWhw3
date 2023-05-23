#ifndef LOGOUTUI_H
#define LOGOUTUI_H

// 헤더 선언
#include <iostream>
// boundary클래스 정의
class LogoutUI
{
    private:
        Logout *logout;
    public:
        void showLogoutProcess(Logout *logout); 
};

#endif