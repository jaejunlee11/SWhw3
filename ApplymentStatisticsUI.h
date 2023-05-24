//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
using namespace std;
// 채용정보 통계를 위한 EmploymentStatisticUI boundary클래스 정의
class ApplymentStatisticsUI{
    private:
    public:
        void showApplymentStatistics(string work[],int applyTime[],int workCount);
};