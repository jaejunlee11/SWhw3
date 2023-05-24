// 헤더 선언
#include <stdio.h>
#include <string.h>
using namespace std;

#include "Dropout.h"


string Dropout::deleteBusinessUserPermission()
{
    businessuserB->revokePermission();
    string id;
    id = businessuserB->showid();
    return id;
};

string Dropout::deleteNormalUserPermission()
{
    normaluserN->revokePermission();
    string id;
    id = normaluserN->showid();
    return id;
};

/*
	함수 이름 : EmploymentRegister::run()
	기능	  : control class생성 후 채용정보등록 실행
	전달 인자 : businessUser->현재 로그인한 businessUser
	반환값    : 없음
*/
void Dropout::businessRun(BusinessUser* businessuserB)
{
    this->businessuserB=businessuserB;
    dropoutUI=DropoutUI();
    dropoutUI.businessUserDropout(this);

}

void Dropout::normalRun(NormalUser* normaluserN)
{
    this->normaluserN=normaluserN;
    dropoutUI=DropoutUI();
    dropoutUI.normalUserDropout(this);
}
