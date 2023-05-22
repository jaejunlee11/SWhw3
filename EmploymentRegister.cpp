// 헤더 선언
#include "EmploymentRegister.h"
/*
	함수 이름 : EmploymentRegisterUI::registerEmploymentInformation()
	기능	  : 회사 회원으로 부터 업무, 인원수,신청 마감일 정보를 입력 받아 새로운 채용정보를 등록
	전달 인자 : work->업무, peopleNumber->인원수, deadline->신청마감일
	반환값    : 없음
*/
void EmploymentRegister::addEmploymentInformation(string work,int peopleNumber,string deadline){
    businessUser->addNewEmploymentInformation(work,peopleNumber,deadline);
};

void EmploymentRegister::run(){
    employmentRegisterUI=new EmploymentRegisterUI();
    employmentRegisterUI->registerEmploymentInformation(this);
}
