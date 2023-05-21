#include <iostream>
#include <string>
#include "EmploymentRegisterUI.h"
#include "EmploymentInformation.h"
#include "BusinessUser.h"
using namespace std;
class EmploymentRegister{
    private:
        EmploymentRegisterUI employmentRegisterUI;
        BusinessUser businessUser;
        EmploymentInformation employmentInformation;
    public:
        void addEmploymentInformation(string work,int peopleNumber,string deadline);
};