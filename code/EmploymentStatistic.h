//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include "BusinessUser.h"
#include "EmploymentInformation.h"
#include "EmploymentStatisticUI.h"
#include "EmploymentInformationCollection.h"
// 채용정보 통계를 위한 EmploymentStatistic control 클래스 정의
class EmploymentStatistic
{
    private:
        BusinessUser *businessUser;
        EmploymentInformation* employInfo;
        EmploymentStatisticUI employmentStatisticUI;
        EmploymentInformationCollection employmentInformationCollection;
    public:
        void run(BusinessUser *businessUser);
};