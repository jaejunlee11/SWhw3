#pragma once
#include <iostream>
#include <string>
using namespace std;
// 채용정보를 위해 EmploymentInformation 클래스 정의
class ApplymentInformation {
private:
    string name;
    string work;
    int peopleNumber;
    string deadline;
    bool isCancel;
    int businessNumber;
public:
    ApplymentInformation(string work, int peopleNumber, string deadline, string name, bool isClosed, int businessNumber);
    void getApplymentInformation();


};