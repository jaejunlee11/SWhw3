//중복방지
#pragma once
#include <iostream>
#include "EmploymentInformation.h"
// EmploymentInformationCollection 클래스 정의
class EmploymentInformationCollection{
    private:
        EmploymentInformation* managedEmploymentInformation[50];
        int numEmploymentInformation;
        int now;
    public:
        EmploymentInformation* findFirst();
        EmploymentInformation* getNext();
        int getSize();
        void addEmploymentInformation(string work,int peopleNumber,string deadline, string companyName,int businessNumber);
        EmploymentInformationCollection(){
            numEmploymentInformation=0;
        };
};