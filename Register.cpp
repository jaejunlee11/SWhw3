// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "Register.h"
#include "BusinessUser.h"
#include "NormalUser.h"

/*
	함수 이름 : UserRegister::addNewBusinessUser()
	기능	  : 회사 회원 리스트에 추가
	전달 인자 : 
  반환값 : 없음
*/
void addBusinessUser(string name, int businessnumber, string id, string pw)
{
  userList->addNewBusinessUsertoList(name, businessnumber, id, pw);
};

void addNormalsUser(string name, int SSN, string id, string pw)
{
  userList->addNewNormalUsertoList(name, SSN, id, pw);
};











/*
	함수 이름 : UserRegister::run()
	기능	  : control class생성 후 채용정보등록 실행
	전달 인자 : 
	반환값    : 없음
*/
void UserRegister::run(UserList *userList)
{
    this->userList=userList;
    userRegisterUI=UserRegisterUI();
    userRegisterUI.newUserRegister(this);
};





/*
void BusinessRegister(string id, string pw, string name, int businessnumber,User* Userlist, int membernum)
{
 newuser = BusinessUser(id,pw,name,businessnumber);
 Userlist[membernum]= newuser;
 membernum++;

};

void BusinessRegister(string id, string pw, string name, int ssn,User* Userlist, int membernum)
{
  newuser = NormalUser(id,pw,name,ssn);
  Userlist[membernum]= newuser;
  membernum++;
  };

*/