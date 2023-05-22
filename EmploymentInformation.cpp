// 헤더 선언
#include "EmploymentInformation.h"
/*
	함수 이름 : EmploymentInformation::EmploymentInformation()
	기능	  : 생성자
	전달 인자 : work->업무, peopleNumber->인원수, deadline->신청마감일, companyName->회사이름, businessNumber->사업자 번호
*/
EmploymentInformation::EmploymentInformation(string work,int peopleNumber,string deadline,string companyName,int businessNumber){
    this->work=work;
    this->peopleNumber=peopleNumber;
    this->deadline=deadline;
    this->companyName=companyName;
    this->businessNumber=businessNumber;
};