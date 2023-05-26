#include "NormalUser.h"
#include "ApplymentInformation.h"
using namespace std;

/*
	함수 이름 : NormalUser::NormalUser(stritng name, int SSN, string id, string pw)
	기능	  : NormalUser 클래스의 생성자(전달 인자가 있을 시)
	전달 인자 : string name/이름, int SSN/주민번호, string id/ ID, string pw / PW 
    반환값 : 없음
*/

NormalUser::NormalUser(string name, int SSN, string id, string pw)
{
this->name = name;
this->ssn = SSN;
this->id = id;
this->pw = pw;
}

/*
	함수 이름 : NormalUser::addApplyInformation()
	기능	  : NormalUser에 applymentinfo 추가
	전달 인자 : work->업무, peopleNumber->인원수, deadline->신청마감일, companyName->회사이름,businessNumber->회사 번호
    반환값 : 없음
*/
void NormalUser::addApplymentInformation(string work,int peopleNumber,string deadline,string companyName,int businessNumber) {
	manageApplymentInformation.addApplymentInformation(work,peopleNumber,deadline,companyName,businessNumber);
}
/*
	함수 이름 : NormalUser::listApplymentInformation()
	기능	  : manageApplymentInformation 리턴
	전달 인자 : 없음
    반환값 : manageApplymentInformation
*/
ApplymentInformationCollection NormalUser::listApplymentInformation() {
	return manageApplymentInformation;
}