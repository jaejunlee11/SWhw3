//중복방지
#pragma once
#include <iostream>
#include <string>
#include "ApplymentInformation.h"
#include "ApplymentCancelUI.h"
#include "ApplymentInformationCollection.h"
#include "NormalUser.h"

using namespace std;

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