#ifndef REGISTER_H
#define REGISTER_H

// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;
#include "user.h"

// 상수 선언
#define MAX_NUMBER_OF_USERS 1000

int BizNo;
int SSN;
string CompnayName;
string Name;
string ID;
string PW;
User newuser;
User[] Users = new User[MAX_NUMBER_OF_USERS];
int usernum = 0;
void BusinessRegister(string ID, string PW, string Name, int BizNo);
void NormalRegister(string ID, string PW, string Name, int SSN);

#endif