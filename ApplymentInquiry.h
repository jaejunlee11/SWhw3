//중복방지
#pragma once
#include <iostream>
#include <string>
#include "ApplymentInformation.h"
#include "ApplymentInquiryUI.h"
#include "NormalUser.h"
using namespace std;

class ApplymentInquiry {
private:
    NormalUser* normalUser;
    ApplymentInquiryUI applymentInquiryUI;
    ApplymentInformation applymentInformation;
    ApplymentInformationCollection applyInfoCollection;
public:
    void run(NormalUser *normaluser);
};