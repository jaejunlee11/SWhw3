//중복방지
#pragma once
// 헤더 선언
#include <iostream>
#include "NormalUser.h"
#include "ApplymentInformation.h"
#include "ApplymentStatisticsUI.h"
// 채용정보 통계를 위한 ApplymentStatistics control 클래스 정의
class ApplymentStatistics
{
    private:
        NormalUser *normalUser;
        ApplymentInformation* applyInfo;
        ApplymentStatisticsUI applymentStatisticsUI;
        ApplymentInformationCollection applymentInformationCollection;
    public:
        void run(NormalUser *normalUser);
};