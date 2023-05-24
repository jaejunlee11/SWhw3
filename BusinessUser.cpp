#include "BusinessUser.h"
BusinessUser::BusinessUser(string name, int businessnumber, string id, string pw)
{
	this->companyName  = name;
	this->businessNumber = businessnumber;
	this->id = id;
	this->pw = pw;
}
/*
	함수 이름 : EmploymentInformationCollection::addEmploymentInformation()
	기능	  : managedEmploymentInformationCollection에 새로운 채용정보를 추가
	전달 인자 : work->업무, peopleNumber->인원수, deadline->신청마감일
	반환값    : 없음
*/
void BusinessUser::addNewEmploymentInformation(string work,int peopleNumber,string deadline){
    managedEmploymentInformationCollection.addEmploymentInformation(work,peopleNumber,deadline,companyName,businessNumber);
};
/*
	함수 이름 : EmploymentInformationCollection::addEmploymentInformation()
	기능	  : EmploymentInformationCollection을 return
	전달 인자 : 없음
	반환값    : EmploymentInformationCollection
*/
EmploymentInformationCollection BusinessUser::listEmploymentInformation(){
    return managedEmploymentInformationCollection;
};