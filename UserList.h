//중복방지
#pragma once
#include <iostream>
#include "BusinessUserCollection.h"
#include "NormalUserCollection.h"

class UserList{
    private:
        BusinessUserCollection* businessUserCollection;
        NormalUserCollection* normalUserCollection;
    public:
        //로그인용 함수
        BusinessUser checkBusinessUserID(string id,string pw);
        NormalUser  checkNormalUserID(string id,string pw);
        

        //로그아웃용 함수
        BusinessUser clearCurrentBusinessUser();
        NormalUser clearCurrentNormalUser();

        //로그인/로그아웃용 함수
        void changeLoginState();

        //회원탈퇴/로그아웃용 함수
        BusinessUser getCurrentBusinessUser();
        NormalUser getCurrentNormalUser();
        
};

//구조 생성:
/*
Userlist-businessusercollection,normalusercollection(list)포함
회원 가입 : 입력값을 받아서 list 추가
회원 탈퇴 : currentuser 받아서 parameter(permission) 값 변경
로그인 : id pw 받아서 parameter(nowlogin) 변경 후 currentuser 포인터 변경
로그아웃 : currentuser 받아서 parameter(nowlogin) 변경 후 currentuser null로



*/