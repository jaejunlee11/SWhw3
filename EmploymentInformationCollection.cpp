// 헤더 선언
#include "EmploymentInformationCollection.h"
/*
	함수 이름 : EmploymentInformationCollection::addEmploymentInformation()
	기능	  : 생성한 EmploymentInformation 배열에 저장
	전달 인자 : work->업무, peopleNumber->인원수, deadline->신청마감일, companyName->회사이름, businessNumber->사업자 번호
	반환값    : 없음
*/
void EmploymentInformationCollection::addEmploymentInformation(string work,int peopleNumber,string deadline, string companyName,int businessNumber){
    managedEmploymentInformation[numEmploymentInformation]= new EmploymentInformation(work,peopleNumber,deadline,companyName,businessNumber);
    numEmploymentInformation+=1;
};
/*
	함수 이름 : EmploymentInformationCollection::getSize()
	기능	  : numEmploymentInformation을 return
	전달 인자 : 없음
	반환값    : numEmploymentInformation
*/
int EmploymentInformationCollection::getSize(){
    return numEmploymentInformation;
};
