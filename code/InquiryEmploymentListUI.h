//중복 방지
#pragma once
//헤더 선언
#include <iostream>
#include <string>
#include "EmploymentInformation.h"
using namespace std;
//채용 정보 리스트 조회를 위한 UI class 선언
class InquiryEmploymentListUI {
public:
	void showEmploymentList(Employee infoArr[], int count);
};