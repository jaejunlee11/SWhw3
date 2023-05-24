//중복방지
#pragma once
#ifndef REGISTERUI_H
#define REGISTERUI_H

// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;
#include <iostream>

//입출력을 위한 REGISTERUI boundary class 정의
class UserRegisterUI
{
    private:
        UserRegister *userRegister;
    public:
        void newUserRegister(UserRegister *userregister); //사용자로부터 정보를 입력받아 새로운 회원 가입시킴
};


#endif

/*
int choice;
int unino;
string name;
string id;
string pw;
User* userList;
int membernum;

void RequestRegister(int choice, string id, string pw, string name, int unino, User* userList, int membernum);
*/
