//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include "EmploymentRegister.h"
//전방 선언
class EmploymentRegister;
// 입출력을 위한 EmploymentRegisterUI boundary클래스 정의
class EmploymentRegisterUI
{
    private:
        EmploymentRegister *employmentRegister;
    public:
        void registerEmploymentInformation(EmploymentRegister *employmentRegister); //회사 회원으로 부터 업무, 인원수,신청 마감일 정보를 입력 받아 새로운 채용정보를 등록
};
