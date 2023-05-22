// 헤더 선언
#include <stdio.h>
#include <string.h>
using namespace std;

#include "LogoutUI.h"
#include "Logout.h"

void RequestLogout(string id, User* userlist)
{
    Login(id,userlist);
}

