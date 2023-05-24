// 헤더 선언
#include "Login.h"
/*
	함수 이름 : Login::performLoginProcess()
	기능	  : 
	전달 인자 : 
	반환값    : 없음
*/
User* Login::performLoginProcess(string id, string pw)
{
    User* target;
    target = businessusercollection->findBusinessUser(id,pw);
    if (target != NULL)
    {
        target->changeLoginState();
        return target;
    }
    target = normalusercollection->findNormalUser(id,pw);
    if(target != NULL)
    {
        target->changeLoginState();
        return target;
    }
    return NULL;
};
/*
	함수 이름 : Login::run()
	기능	  : 
	전달 인자 : 
	반환값    : 없음
*/
void Login::run(BusinessUser* businessuserB,NormalUser* normaluserN)
{
    User *ans;
    this->businessuser=businessuserB;
    this->normaluser=normaluserN;
    loginUI=LoginUI();
    ans = loginUI.showLoginProcess(this);
    //다중 return?
}
