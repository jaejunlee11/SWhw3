//중복방지
#pragma once
#include <iostream>
#include <string>
#include "ApplymentInformation.h"
#include "ApplymentCancelUI.h"
#include "ApplymentInformationCollection.h"
#include "NormalUser.h"
    
using namespace std;
// 지원 취소를 위한 ApplymentCancel control 클래스 정의
class ApplymentCancel {
    private:
        NormalUser* normalUser;
        ApplymentInformation applymentInformation;
        ApplymentCancelUI applymentCancelUI;
        ApplymentInformationCollection applyInfoCollection;
    public: 
        format cancelApplyment(int cancelNum);
        void run(NormalUser* normalUser);
};