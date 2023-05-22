// 헤더 선언
#include <iostream>
#include "BusinessUser.h"
#include "EmploymentInformation.h"
// 채용정보 통계를 위한 EmploymentStatistic control 클래스 정의
class EmploymentStatistic
{
    private:
        BusinessUser *businessUser;
        EmploymentInformation *employmentInformation;
    public:
        void run(BusinessUser *businessUser);

};