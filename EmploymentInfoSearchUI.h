//중복 방지
#pragma once
//헤더 선언
#include <iostream>
#include <string>
#include "EmploymentInfoSearch.h"
using namespace std;

class EmploymentInfoSearchUI
{
private:
	EmploymentInfoSearch* employmentSearch;
	string companyName = NULL;
public:
	void inputEmploymentInformation(EmploymentInfoSearch* control);
};