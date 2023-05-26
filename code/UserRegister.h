//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
#include "UserRegisterUI.h"
#include "NormalUserCollection.h"
#include "BusinessUserCollection.h"
#include "BusinessUser.h"
#include "NormalUser.h"
//control 클래스 정의
class UserRegister{
    private:
        UserRegisterUI userRegisterUI;
        NormalUserCollection* normalUserCollection;
        BusinessUserCollection* businessUserCollection;
    public:
        void addBusinessUser(string name, int businessnumber, string id, string pw);
        void addNormalUser(string name, int SSN, string id, string pw);
        void businessRun(BusinessUserCollection* businessUserCollection);
        void normalRun(NormalUserCollection* normalUserCollection);
};






