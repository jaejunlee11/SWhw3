//중복방지
#pragma once
#ifndef REGISTERUI_H
#define REGISTERUI_H

// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

int choice;
int unino;
string name;
string id;
string pw;
User* userList;
int membernum;

void RequestRegister(int choice, string id, string pw, string name, int unino, User* userList, int membernum);


#endif