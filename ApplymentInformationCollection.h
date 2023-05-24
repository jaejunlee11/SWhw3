//중복방지
#pragma once
#include <iostream>
#include "ApplymentInformation.h"
class ApplymentInformationCollection {
private:
    ApplymentInformation* managedApplymentInformation[50];
    int numApplymentInformation;
    int now;
public:
    ApplymentInformationCollection(){
        numApplymentInformation=0;
    };
    ApplymentInformation* findFirst();
    ApplymentInformation* getNext();
    int getSize();
    ApplymentInformation addApplymentInformation(string work, int peopleNumber, string deadline, string companyName, int businessNumber);
}; 