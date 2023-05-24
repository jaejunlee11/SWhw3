//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
#include "LogoutUI.h"
#include "Logout.h"
#include "BusinessUser.h"
#include "NormalUser.h"
using namespace std;
//  control 클래스 정의
class Logout{
    private:
        LogoutUI logoutUI;
        BusinessUser *businessuser;
        NormalUser *normaluser;
    public:
        string performNormalUserLogout();
        string performBusinessUserLogout();
        void normalRun(NormalUser *normaluser);
        void businessRun(BusinessUser *businessuser);
};