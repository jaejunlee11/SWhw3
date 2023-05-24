//중복방지
#pragma once
// 헤더 선언
#include <iostream>
// 입출력을 위한 boundary클래스 정의
class DropoutUI
{
    private:
        Dropout *dropout;
    public:
        void userDropout(Dropout *dropout); 
};

#endif