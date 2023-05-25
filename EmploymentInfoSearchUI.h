#pragma once
#include <iostream>
#include <string>

class EmploymentInfoSearch;

class EmploymentInfoSearchUI
{
private:
	EmploymentInfoSearch* employmentSearch;
	string companyName = NULL;
public:
	void inputEmploymentInformation(EmploymentInfoSearch* control);
};