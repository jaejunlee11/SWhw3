// 헤더 선언
#include <iostream>
#include <string>
#include "EmploymentRegisterUI.h"
#include "EmploymentInformation.h"
#include "BusinessUser.h"
using namespace std;
// 채용정보를 등록을 위한 EmploymentRegister control 클래스 정의
class EmploymentRegister{
    private:
        EmploymentRegisterUI *employmentRegisterUI;
        BusinessUser *businessUser;
        EmploymentInformation *employmentInformation;
    public:
        void addEmploymentInformation(string work,int peopleNumber,string deadline);
        void run();
};