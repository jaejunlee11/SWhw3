// 헤더 선언
#include "EmploymentInformationCollection.h"
EmploymentInformation EmploymentInformationCollection::findFirst(){
    
};
EmploymentInformation EmploymentInformationCollection::addEmploymentInformation(string work,int peopleNumber,string deadline, string companyName,int businessNumber){
    managedEmploymentInformation[numEmploymentInformation]= new EmploymentInformation(work,peopleNumber,deadline,companyName,businessNumber);
    numEmploymentInformation+=1;
};