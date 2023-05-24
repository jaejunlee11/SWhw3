//중복방지
#pragma once
#include <iostream>
#include <string>
using namespace std;

struct format {
    string name;
    int businessNum;
    string work;
    int pNum;
    bool isCancel;
    string deadline;
};
class ApplymentInformation {
private:
    string name;
    string work;
    int peopleNumber;
    string deadline;
    bool isCancel = 0;
    int businessNumber;
    
    format x;

public:
    ApplymentInformation(string work, int peopleNumber, string deadline, string name, bool isClosed, int businessNumber);
    format getApplymentInformation();
    void cancelApplymentInformation();
};