#include <iostream>
#include "ApplymentInformation.h"
class ApplymentInformationCollection {
private:
    ApplymentInformation* managedApplymentInformation[50];
    int numApplymentInformation = 0;
public:
    ApplymentInformation findFirst();
    ApplymentInformation getNext();
    int getSize();
    ApplymentInformation addApplymentInformation(string work, int peopleNumber, string deadline, string companyName, int businessNumber);
}; 