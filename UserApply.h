//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
#include "UserApplyUI.h"
#include "EmploymentInformation.h"
#include "NormalUser.h"
#include "EmploymentInfoSearch.h"
using namespace std;
// 채용정보를 등록을 위한 EmploymentRegister control 클래스 정의
class UserApply{
    private:
        UserApplyUI userApplyUI;
        NormalUser *normalUser;
        EmploymentInformation *employmentInformation;
    public:
        void addApplymentInformation(string work,int peopleNumber,string deadline,string companyName,int businessNumber);
        void run(NormalUser *normalUser,EmploymentInfoSearch employmentInfoSearch);
};