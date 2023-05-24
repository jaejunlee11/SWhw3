#pragma once
#include <iostream>
#include <string>
#include "EmploymentInfoSearchUI.h"
#include "EmploymentInformation.h"
using namespace std;

class EmploymentInfoSearch {
private:
	EmploymentInfoSearchUI employmentInfoSearchUI;
	EmploymentInformation employmentInformation;
public:
	void findEmploymentInformation(string companyName, int businessNumber, string work, int peopleNumber, string deadline);
};