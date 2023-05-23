#include <iostream>
#include <algorithm>
#include "InquiryEmploymentList.h"
#include "BusinessUser.h"

int cmp(format a, format b)
{
    return a.name < b.name;
}
void InquiryEmploymentList::run(BusinessUser* businessuser) {
    inquiryEmploymentListUI = InquiryEmploymentListUI();
    format infoArr[50];

    this->businessUser = businessuser;
    employmentInformationCollection = businessUser->listEmploymentInformation();

    EmploymentInformation registerInfo = employmentInformationCollection.findFirst();
    infoArr[0] = registerInfo.getEmploymentInformation();
    int count = employmentInformationCollection.getSize();

    for (int i = 1; i < count; i++) {
        registerInfo = employmentInformationCollection.getNext();
        infoArr[i] = registerInfo.getEmploymentInformation();
    }

    sort(infoArr, infoArr + count, cmp);

    InquiryEmploymentList.showEmploymentList(infoArr, count);

};