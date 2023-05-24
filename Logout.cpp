// 헤더 선언
#include "Logout.h"
/*
	함수 이름 : Logout::performLogoutProcess()
	기능	  : 
	전달 인자 : 
	반환값    : 없음
*/
string Logout::performNormalUserLogout()
{
	string id;
	normaluser->changeLoginState();
	id = normaluser->showid();
	return id;
};

string Logout::performBusinessUserLogout()
{
	string id;
	businessuser->changeLoginState();
	id = businessuser->showid();
	return id;
};
/*
	함수 이름 : Login::run()
	기능	  : 
	전달 인자 : 
	반환값    : 없음
*/
void Logout::normalRun(NormalUser *normaluserN)
{
    this->normaluser=normaluserN;
    logoutUI=LogoutUI();
    logoutUI.normalUserLogout(this);
}

void Logout::businessRun(BusinessUser *businessuserB)
{
	this->businessuser=businessuserB;
	logoutUI=LogoutUI();
	logoutUI.businessUserLogout(this);
}