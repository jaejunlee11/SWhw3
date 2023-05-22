// 헤더 선언
#include <iostream>
#include "user.h"
#include "EmploymentInformationCollection.h"
//BusinessUser 클래스 정의
class BusinessUser:User{
    private:
        string companyName;
        int businessNumber;
        EmploymentInformationCollection* managedEmploymentInformationCollection;
    public:
        void addNewEmploymentInformation(string work,int peopleNumber,string deadline);
        EmploymentInformationCollection* listEmploymentInformation();
};