#include <iostream>
#include "ApplymentInformation.h"
class ApplymentInformationCollection {
private:
    ApplymentInformation* managedApplymentInformation[];
public:
    ApplymentInformation findFirst();
    ApplymentInformation getNext();
    ApplymentInformation addApplymentInformation(string work, int peopleNumber, string deadline, string companyName, int businessNumber);
}; 