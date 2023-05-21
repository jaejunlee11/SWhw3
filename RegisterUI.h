#ifndef REGISTERUI_H
#define REGISTERUI_H

// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

int Choice;
int UniNo;
string Name;
string ID;
string PW;

void RequestRegister(int Choice, string ID, string PW, string Name, int UniNo);


#endif