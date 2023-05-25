// 헤더 선언
#include "Login.h"
#include <typeinfo>
/*
	함수 이름 : Login::performLoginProcess()
	기능	  : 각 Collection 탐색을 통해 Normaluser인지 businessuser인지 파악 후 Login 과정을 수행함
	전달 인자 : string id, string pw
	반환값    : 없음
*/
void Login::performLoginProcess(string id, string pw)
{
    BusinessUser* targetB;
    NormalUser*   targetN;
    targetB = businessusercollection->findBusinessUser(id,pw);
    if (targetB != NULL)
    {
        targetB->changeLoginState();
        businessuser = targetB;
    }
    targetN = normalusercollection->findNormalUser(id,pw);
    if(targetN != NULL)
    {
        targetN->changeLoginState();
        normaluser = targetN;
    }
};
/*
	함수 이름 : Login::run()
	기능	  :  로그인 과정 수행
	전달 인자 : BusiunessUser, NormalUser (currentuser 변경용)
	반환값    : 없음
*/
void Login::run(BusinessUser* businessuserB,NormalUser* normaluserN,BusinessUserCollection businessUserCollection,NormalUserCollection NormalUserCollection)
{
    this->businessuser=businessuserB;
    this->normaluser=normaluserN;
    this->businessusercollection=businessusercollection;
    this->normalusercollection=normalusercollection;
    loginUI=LoginUI();
    loginUI.showLoginProcess(this);
}
