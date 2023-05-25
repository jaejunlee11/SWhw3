//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
#include "LoginUI.h"
#include "BusinessUserCollection.h"
#include "NormalUserCollection.h"
using namespace std;
// control 클래스 정의
class Login{
    private:
        LoginUI loginUI;
        BusinessUser* businessuser;
        NormalUser* normaluser;
        NormalUserCollection* normalusercollection;
        BusinessUserCollection* businessusercollection;

    public:
        void performLoginProcess(string id, string pw);
        void run(BusinessUser* businessuserB,NormalUser* normaluserN,BusinessUserCollection* businessUserCollection,NormalUserCollection* NormalUserCollection);
};
