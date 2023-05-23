// 헤더 선언
#include "Login.h"
/*
	함수 이름 : Login::performLoginProcess()
	기능	  : 
	전달 인자 : 
	반환값    : 없음
*/
void performLoginProcess(string id, string pw)
{
    User target;
    bool avaliability;
    target = userList->finduser(id);
    avaliability = target->checkIDInfo(pw);
    if(avaliability == true)
    {
        target->changeLoginState();
        userList->changeCurrentUser(target);
    }
};
/*
	함수 이름 : Login::run()
	기능	  : 
	전달 인자 : 
	반환값    : 없음
*/
void Login::run(UserList *userList){
    this->userList=userList;
    loginUI=LoginUI();
    loginUI.showLoginProcess(this);
}
