#pragma once
#include <iostream>
#include <string>

class EmploymentInfoSearch;

class EmploymentInfoSearchUI
{
private:
	EmploymentInfoSearch* employmentSearch;
	string companyName = Null;
public:
	void inputEmploymentInformation(EmploymentInfoSearch* control);
};