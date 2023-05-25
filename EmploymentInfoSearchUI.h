//중복 방지
#pragma once
//헤더 선언
#include <iostream>
#include <string>
#include "EmploymentInfoSearch.h"
using namespace std;
//전방 선언
class EmploymentInfoSearch;
// 채용정보 검색을 위한 EmploymentInfoSearch UI 클래스 정의
class EmploymentInfoSearchUI
{
private:
	EmploymentInfoSearch* employmentSearch;
	string companyName;
public:
	void inputEmploymentInformation(EmploymentInfoSearch* control);
};