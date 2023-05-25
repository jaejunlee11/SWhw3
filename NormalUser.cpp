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
	전달 인자 : 없음
    반환값 : 없음
*/
void NormalUser::addApplymentInformation() {

}

ApplymentInformationCollection NormalUser::listApplymentInformation() {
	return manageApplymentInformation;
}