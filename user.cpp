
// 헤더 선언
// User list의 필요성과 그걸 보관할 장소의 부재?
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

User::~User() 
{

}

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

void User::revokePermission() 
{
    permission = 0;
}

string User::showid() 
{
    return id;
}
