//중복 방지
#pragma once
//헤더 선언
#include <iostream>
#include "BusinessUser.h"
#include "EmploymentInformation.h"
#include "InquiryEmploymentListUI.h"
//채용 정보 리스트 control class 생성
class InquiryEmploymentList
{
private:
    BusinessUser* businessUser;
    InquiryEmploymentListUI inquiryEmploymentListUI;
    EmploymentInformation* employinfo;
    EmploymentInformationCollection employmentInformationCollection;
public:
    void run(BusinessUser* businessUser);
};