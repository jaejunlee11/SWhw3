//중복방지
#pragma once
#include "ApplymentInformation.h"
#include <iostream>
// 지원 정보 조회를 위한 ApplymentInquirylUI boundary클래스 정의
class ApplymentInquiryUI {
	public:
		void showApplymentList(format array[], int count);
};