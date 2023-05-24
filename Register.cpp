// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "Register.h"


/*
	함수 이름 : UserRegister::addNewBusinessUser()
	기능	  : 회사 회원 리스트에 추가
	전달 인자 : 
  반환값 : 없음
*/
void UserRegister::addBusinessUser(string name, int businessnumber, string id, string pw)
{
  businessUserCollection.addNewBusinessUser(name, businessnumber, id, pw);
};

void UserRegister::addNormalUser(string name, int SSN, string id, string pw)
{
  normalUserCollection.addNewNormalUser(name, SSN, id, pw);
};











/*
	함수 이름 : UserRegister::run()
	기능	  : control class생성 후 채용정보등록 실행
	전달 인자 : 
	반환값    : 없음
*/
void UserRegister::businessRun(BusinessUser* businessuserB)
{

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