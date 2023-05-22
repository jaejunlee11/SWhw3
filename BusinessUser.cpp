#include "BusinessUser.h"
void BusinessUser::addNewEmploymentInformation(string work,int peopleNumber,string deadline){
    managedEmploymentInformationCollection->addEmploymentInformation(work,peopleNumber,deadline,companyName,businessNumber);
};