// 헤더 선언
#include "UserApply.h"
/*
	함수 이름 : EmploymentRegisterUI::registerEmploymentInformation()
	기능	  : 회사 회원으로 부터 업무, 인원수,신청 마감일 정보를 입력 받아 새로운 채용정보를 등록
	전달 인자 : work->업무, peopleNumber->인원수, deadline->신청마감일
	반환값    : 없음
*/
void UserApply::addApplymentInformation(string work,int peopleNumber,string deadline,string companyName,int businessNumber){
    normalUser->addApplymentInformation(work,peopleNumber,deadline,companyName,businessNumber);
};
/*
	함수 이름 : UserApply::run()
	기능	  : control class생성 후 지원하기 실행
	전달 인자 : normalUser->현재 로그인한 normalUser ,employmentInfoSearch->검색했던 정보를 위한 인스턴스
	반환값    : 없음
*/
void UserApply::run(NormalUser *normalUser,EmploymentInfoSearch employmentInfoSearch){

}