#pragma once
#include <iostream>
#include "BusinessUser.h"
#include "EmploymentInformation.h"
#include "InquiryEmploymentListUI.h"

class InquiryEmploymentList
{
private:
    BusinessUser* businessUser;
    EmploymentStatisticUI employmentStatisticUI;
    EmploymentInformation employmentInformation;
    EmploymentInformationCollection employmentInformationCollection;
public:
    void run(BusinessUser* businessUser)
};