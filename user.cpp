
// 헤더 선언
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;
#include "User.h"

/*
	함수 이름 : User::User()
	기능	  : 클래스 생성자,초기값 설정
	전달 인자 : 없음
	반환값    : 없음
*/

User::User() 
{
    nowlogin = 0;
    permission = 1;
}

/*
	함수 이름 : User::checkIDInfo()
	기능	  : User 내부의 id,pw값과 전달 인자 id, pw값이 동일한지 확인함
	전달 인자 : string id, string pw
	반환값    : boolean true/false
*/

bool User::checkIDInfo(string id, string pw) 
{
    if(id == this->id && pw == this->pw)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
	함수 이름 : User::changeLoginState()
	기능	  : User 내부의 nowlogin 값을 login/logout 시마다 변경해줌
	전달 인자 : 없음
	반환값    : 없음
*/

void User::changeLoginState() 
{
    if(nowlogin == 1)
    {
        nowlogin == 0;
    }
    else
    {
        nowlogin == 1;
    }
}

/*
	함수 이름 : User::revokePermission()
	기능	  : User의 내부 permission 값 변경.
	전달 인자 : 없음
	반환값    : 없음
*/

void User::revokePermission() 
{
    permission = 0;
}

/*
	함수 이름 : User::showid()
	기능	  : User의 id값 return
	전달 인자 : 없음
	반환값    : string id
*/

string User::showid() 
{
    return id;
}
