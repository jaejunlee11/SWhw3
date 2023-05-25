#pragma once
#include <iostream>
#include <string>
#include "EmploymentInfoSearchUI.h"
#include "EmploymentInformation.h"
#include "BusinessUser.h"
#include "BusinessUserCollection.h"
#include "EmploymentInformationCollection.h"
using namespace std;

class EmploymentInfoSearch {
private:
	BusinessUser* businessUser;
	BusinessUserCollection* businessUserCollection;
	EmploymentInformation* employInfo;
	EmploymentInfoSearchUI employmentInfoSearchUI;
	EmploymentInformationCollection employInfoCollection;
public:
	void findEmploymentInformation(string companyName);
	void run(BusinessUserCollection* businessUserCollection);
};