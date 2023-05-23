#ifndef LOGINUI_H
#define LOGINUI_H

// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "user.h"

std::string id;
std::string pw;
User* userlist;
void RequestLogin(string id, string pw,User* userlist);

#endif