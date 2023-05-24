//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
#include "DropoutUI.h"
#include "NormalUserCollection.h"
#include "BusinessUserCollection.h"
using namespace std;

// control 클래스 정의
class Dropout{
    private:
        DropoutUI dropoutUI;
        NormalUserCollection normalUserCollection;
        BusinessUserCollection businessUserCollection;
        BusinessUser* businessuserB;
        NormalUser* normaluserN;

    public:
        string deleteBusinessUserPermission();
        string deleteNormalUserPermission();
        void businessRun(BusinessUser* businessuser);
        void normalRun(NormalUser* normaluser);
};
