#pragma once
#include <iostream>
#include <string>
using namespace std;
// ä�������� ���� EmploymentInformation Ŭ���� ����
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