//중복방지
#pragma once
// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "user.h"

std::string id;
User* userlist;
void RequestLogout(string id,User* userlist);

#endif