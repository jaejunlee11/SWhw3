//중복방지
#pragma once
#include <iostream>
#include <string>
using namespace std;

//구조체 정의
struct format {
    string name;
    int businessNum;
    string work;
    int pNum;
    bool isCancel;
    string deadline;
};
// 지원정보를 위해 ApplymentInformation 클래스 정의
class ApplymentInformation {
private:
    string name;
    string work;
    int peopleNumber;
    string deadline;
    bool isCancel;
    int businessNum;
    
    format x;

public:
    ApplymentInformation(string work, int peopleNumber, string deadline, string name, bool isCancel, int businessNum);
    format getApplymentInformation();
    void cancelApplymentInformation();
};