//중복방지
#pragma once
// 헤더 선언
#include <iostream>
//전방 선언
class Logout;
// boundary클래스 정의
class LogoutUI
{
    private:
        Logout *logout;
    public:
        void normalUserLogout(Logout *logout);
        void businessUserLogout(Logout *logout); 
};
