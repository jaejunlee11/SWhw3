#include <iostream>
#include "EmploymentRegisterUI.h"
#include "EmploymentInformation.h"
#include "BusinessUser.h"
class EmploymentRegister{
    private:
        EmploymentRegisterUI employmentRegisterUI;
        BusinessUser businessUser;
        EmploymentInformation employmentInformation;
    public:
        void addEmploymentInformation();

};