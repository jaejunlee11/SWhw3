// 헤더 선언
#include <stdio.h>
#include <string.h>
using namespace std;

#include "LoginUI.h"
#include "Login.h"

void RequestLogin(string id, string pw, User* userlist)
{
    Login(id,pw,userlist);
}

