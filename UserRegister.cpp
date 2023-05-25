// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "UserRegister.h"


/*
	함수 이름 : UserRegister::addNewBusinessUser()
	기능	  : 사용자를 회사 회원으로 추가
	전달 인자 : string name/이름, int businessuser/사업자번호, string id/ ID, string pw / PW 
  반환값 : 없음
*/
void UserRegister::addBusinessUser(string name, int businessnumber, string id, string pw)
{
  businessUserCollection.addNewBusinessUser(name, businessnumber, id, pw);
};

/*
	함수 이름 : UserRegister::addNewNormalUser()
	기능	  : 사용자를 일반 회원으로 추가
	전달 인자 : string name/이름, int SSN/주민번호, string id/ ID, string pw / PW 
  반환값 : 없음
*/
void UserRegister::addNormalUser(string name, int SSN, string id, string pw)
{
  normalUserCollection.addNewNormalUser(name, SSN, id, pw);
};





/*
	함수 이름 : UserRegister::businessrun()
	기능	  : control class생성 후  실행,회사 회원 생성 시 사용
	전달 인자 : businessuserB
	반환값    : 없음
*/
void UserRegister::businessRun(BusinessUser* businessuserB)
{
  this->businessuserB=businessuserB;
  userRegisterUI=UserRegisterUI();
  userRegisterUI.newUserRegister(this,1);
};

/*
	함수 이름 : UserRegister::normalrun()
	기능	  : control class생성 후  실행,일반 회원 생성 시 사용
	전달 인자 : normaluserN
	반환값    : 없음
*/

void UserRegister::normalRun(NormalUser* normaluserN)
{
  this->normaluserN=normaluserN;
  userRegisterUI=UserRegisterUI();
  userRegisterUI.newUserRegister(this,2);
};



