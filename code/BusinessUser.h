//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include "user.h"
#include "EmploymentInformationCollection.h"
//BusinessUser 클래스 정의
class BusinessUser: public User{
    private:
        string companyName;
        int businessNumber;
        EmploymentInformationCollection managedEmploymentInformationCollection;
    public:
        BusinessUser();
        void addNewEmploymentInformation(string work,int peopleNumber,string deadline);
        EmploymentInformationCollection listEmploymentInformation();
        BusinessUser(string name, int businessnumber, string id, string pw);
};