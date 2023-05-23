#ifndef REGISTER_H
#define REGISTER_H

// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;
#include "user.h"

// 상수 선언
#define MAX_NUMBER_OF_USERS 1000

int businessnumber;
int ssn;
string companyname;
string name;
string id;
string pw;
User newuser;
User* userlist;
int membernum;
int usernum = 0;
void BusinessRegister(string id, string pw, string name, int businessnumber,User* userlist, int membernum);
void NormalRegister(string id, string pw, string name, int ssn, User* userlist, int membernum);

#endif