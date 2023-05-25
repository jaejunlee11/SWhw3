#pragma once
#include <iostream>
#include <string>
#include "EmploymentInfoSearchUI.h"
#include "EmploymentInformation.h"
#include "BusinessUser.h"
#include "BusinessUserCollection.h"
#include "EmploymentInformationCollection.h"
using namespace std;
// 채용정보 검색을 위한 EmploymentInfoSearch control 클래스 정의
class EmploymentInfoSearch {
private:
	BusinessUser* businessUser;
	BusinessUserCollection* businessUserCollection;
	EmploymentInformation* employInfo;
	EmploymentInfoSearchUI employmentInfoSearchUI;
	EmploymentInformationCollection employInfoCollection;
	int findCount;
public:
	Employee* findEmploymentInformation(string companyName);
	int findCountSize();
	void run(BusinessUserCollection* businessUserCollection);
};