#pragma once
#include <iostream>
#include <string>
#include "EmploymentInfoSearchUI.h"
#include "EmploymentInformation.h"
#include "BusinessUser.h"
using namespace std;

class EmploymentInfoSearch {
private:
	BusinessUser* businessUser;
	EmploymentInformation employmentInformation;
	EmploymentInfoSearchUI employmentInfoSearchUI;
	EmploymentInformationCollection employInfoCollection;
public:
	void findEmploymentInformation(string companyName);
	void run(BusinessUser* businessUser);
};