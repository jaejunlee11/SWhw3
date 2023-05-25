//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include <string>
using namespace std;
//전방 선언
class ApplymentStatistics;
// 채용정보 통계를 위한 EmploymentStatisticUI boundary클래스 정의
class ApplymentStatisticsUI{
    public:
        void showApplymentStatistics(string work[],int applyTime[],int workCount);
};