//중복방지
#pragma once
#include <iostream>
#include "BusinessUser.h"
#include "NormalUser.h"
//상수선언
#define MAX_NUMBER_OF_USER 50

class UserList{
    private:
        User* managedUserList[MAX_NUMBER_OF_USER];
        int numofUser;
    public:
        User findFirst();
        User getNext();
        BusinessUser getCurrentBusinessUser();
        NormalUser getCurrentNormalUser();

        int getSize();
        void addnewNormalUser(string name, int businessnumber,string id,string pw);
        void addNewBusinessUser(string name, int SSN, string ID, string PW);
        UserList(){
            numofUser=0;
        };
};

//구조 생성:
/*
Userlist-businessusercollection,normalusercollection(list)포함
회원 가입 : 입력값을 받아서 list 추가
회원 탈퇴 : currentuser 받아서 parameter(permission) 값 변경
로그인 : id pw 받아서 parameter(nowlogin) 변경 후 currentuser 포인터 변경
로그아웃 : currentuser 받아서 parameter(nowlogin) 변경 후 currentuser null로



*/