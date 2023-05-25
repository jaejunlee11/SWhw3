// 헤더 선언
#include <stdio.h>
#include <string.h>
using namespace std;

#include "Dropout.h"

/*
	함수 이름 : Dropout::deleteBusinessuserpermission()
	기능	  : 회사 회원의 탈퇴 과정 실제 수행
	전달 인자 : 없음
	반환값    : string id
*/
string Dropout::deleteBusinessUserPermission()
{
    businessuserB->revokePermission();
    string id;
    id = businessuserB->showid();
    return id;
};
/*
	함수 이름 : Dropout::deletenormaluserpermission()
	기능	  : 일반 회원의 탈퇴 과정 실제 수행
	전달 인자 : 없음
	반환값    : string id
*/
string Dropout::deleteNormalUserPermission()
{
    normaluserN->revokePermission();
    string id;
    id = normaluserN->showid();
    return id;
};

/*
	함수 이름 : Dropout::businessrun()
	기능	  : 회사 회원의 탈퇴 과정 수행
	전달 인자 : businessUser->현재 로그인한 businessUser
	반환값    : 없음
*/
void Dropout::businessRun(BusinessUser* businessuserB)
{
    this->businessuserB=businessuserB;
    dropoutUI=DropoutUI();
    dropoutUI.businessUserDropout(this);

}
/*
	함수 이름 : Dropout::normalrun()
	기능	  : 일반 회원의 탈퇴 과정 수행
	전달 인자 : normalUser->현재 로그인한 normalUser
	반환값    : 없음
*/
void Dropout::normalRun(NormalUser* normaluserN)
{
    this->normaluserN=normaluserN;
    dropoutUI=DropoutUI();
    dropoutUI.normalUserDropout(this);
}
