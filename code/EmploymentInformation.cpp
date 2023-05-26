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
/*
	함수 이름 : EmploymentInformation::getEmploymentInformation()
	기능	  : EmploymentInformation의 값들을 구조체에 담아서 반환
	전달 인자 : 없음
    반환값    : Employee 구조체
*/
Employee EmploymentInformation::getEmploymentInformation() {
	x.work = this->work;
	x.businessNumber = this->businessNumber;
	x.companyName = this->companyName;
	x.peopleNumber = this->peopleNumber;
	x.deadline = this->deadline;
	return x;
}