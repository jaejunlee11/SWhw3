//중복방지
#pragma once
// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "user.h"

std::string dropid;
User usinguser;
User* userlist;
void Dropout(std::string dropid,User* userlist);

#endif