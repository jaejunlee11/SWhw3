#include <iostream>
#include "EmploymentInformation.h"
class EmploymentInformationCollection{
    private:
        EmploymentInformation* managedEmploymentInformation[];
    public:
        EmploymentInformation findFirst();
        EmploymentInformation getNext();
        EmploymentInformation addEmploymentInformation(string work,int peopleNumber,string deadline, string companyName,int businessNumber);
};