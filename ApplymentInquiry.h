//중복방지
#pragma once
#include <iostream>
#include <string>
#include "ApplymentInformation.h"
#include "ApplymentInquiryUI.h"
#include "ApplymentInformationCollection.h"
#include "NormalUser.h"
using namespace std;
// 지원정보를 조회를 위한 ApplymentInquiry control 클래스 정의
class ApplymentInquiry {
private:
    NormalUser* normalUser;
    ApplymentInquiryUI applymentInquiryUI;
    ApplymentInformation applymentInformation;
    ApplymentInformationCollection applyInfoCollection;
public:
    void run(NormalUser *normaluser);
    ApplymentInquiry();
};