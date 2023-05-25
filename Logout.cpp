// 헤더 선언
#include "Logout.h"
/*
	함수 이름 : Logout::performNormalUserLogout()
	기능	  : 일반 회원의 로그아웃 과정을 실제로 실행하는 함수
	전달 인자 : 없음
	반환값    : string id
*/
string Logout::performNormalUserLogout()
{
	string id;
	normaluser->changeLoginState();
	id = normaluser->showid();
	normaluser = NULL;
	return id;
};

/*
	함수 이름 : Logout::performBusinessUserLogout()
	기능	  : 회사 회원의 로그아웃 과정을 실제로 실행하는 함수
	전달 인자 : 없음
	반환값    : string id
*/

string Logout::performBusinessUserLogout()
{
	string id;
	businessuser->changeLoginState();
	id = businessuser->showid();
	businessuser = NULL;
	return id;
};
/*
	함수 이름 : Login::normalRun()
	기능	  : 일반 회원 logout 수행
	전달 인자 : NormalUser *normaluserN (currentUser)
	반환값    : 없음
*/
void Logout::normalRun(NormalUser *normaluserN)
{
    this->normaluser=normaluserN;
    logoutUI=LogoutUI();
    logoutUI.normalUserLogout(this);
}

/*
	함수 이름 : Login::businessRun()
	기능	  : 회사 회원 logout 수행
	전달 인자 : BusinessUser *businessUserB (currentUser)
	반환값    : 없음
*/
void Logout::businessRun(BusinessUser *businessuserB)
{
	this->businessuser=businessuserB;
	logoutUI=LogoutUI();
	logoutUI.businessUserLogout(this);
}