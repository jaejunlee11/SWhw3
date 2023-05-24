// 헤더 선언
#include "Logout.h"
/*
	함수 이름 : Logout::performLogoutProcess()
	기능	  : 
	전달 인자 : 
	반환값    : 없음
*/
void performLogoutProcess(string id)
{
    User target;
    target = userList->finduser(id);
    target->changeLoginState();
    userList->clearCurrentUser();
};
/*
	함수 이름 : Login::run()
	기능	  : 
	전달 인자 : 
	반환값    : 없음
*/
void Logout::run(UserList *userList){
    this->userList=userList;
    logoutUI=LogoutUI();
    logoutUI.showLogoutProcess(this);
}
