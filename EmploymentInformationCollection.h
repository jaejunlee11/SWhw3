#include <iostream>
#include "EmploymentInformation.h"
class EmploymentInformationCollection{
    private:
        EmploymentInformation* managedEmploymentInformation[50];
        int numEmploymentInformation;
    public:
        EmploymentInformation findFirst();
        EmploymentInformation getNext();
        void addEmploymentInformation(string work,int peopleNumber,string deadline, string companyName,int businessNumber);
        EmploymentInformationCollection(){
            numEmploymentInformation=0;
        };
};