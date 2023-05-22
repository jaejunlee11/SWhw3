// 헤더 선언
// User list의 필요성과 그걸 보관할 장소의 부재?
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;
#include "user.h"

User::User() 
{
    nowlogin = 0;
    permission = 1;
}

User::~User() 
{

}

bool User::CheckIDInfo(string inputid) 
{
    if(inputid == id)
        {
            return true;
        }
    else
    {
        return false;
    }
}

bool User::CheckIDPWInfo(string inputid, string inputpw) 
{
    if(inputid == id)
        {
            if(inputpw == pw)
            {
                return true;
            }
        }
    else
    {
        return false;
    }
}

bool User::CheckLogin() 
{
    if(nowlogin == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void User::RevokePermission(string ID) 
{
    permission = 0;
}

void User::UserLogout() 
{
    nowlogin = 0;
}

void User::UserLogin() 
{
    nowlogin = 1;
}