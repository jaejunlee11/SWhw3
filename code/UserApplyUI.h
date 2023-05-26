//중복방지
#pragma once
// 헤더 선언
#include <iostream>
//전방 선언
class UserApply;
// boundary클래스 정의
class UserApplyUI
{
    private:
        UserApply userApply;
    public:
        void show();
};