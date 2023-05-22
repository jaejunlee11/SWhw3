#pragma once
#include <iostream>
#include <string>
using namespace std;

struct format {
    string name;
    int businessNum;
    string work;
    int pNum;
    string deadline;
};
class ApplymentInformation {
private:
    string name;
    string work;
    int peopleNumber;
    string deadline;
    bool isCancel;
    int businessNumber;
    
    format x;
public:
    ApplymentInformation(string work, int peopleNumber, string deadline, string name, bool isClosed, int businessNumber);
    void getApplymentInformation();
    void sort();
    format getFormat();
};