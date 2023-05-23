#ifndef LOGOUTUI_H
#define LOGOUTUI_H

// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "user.h"

std::string id;
User* userlist;
void RequestLogout(string id,User* userlist);

#endif