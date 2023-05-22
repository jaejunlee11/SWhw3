#ifndef DROPOUT_H
#define DROPOUT_H

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