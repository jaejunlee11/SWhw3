//중복방지
#pragma once
#include <iostream>
#include "ApplymentCancel.h"

class ApplymentCancel;
// 지원 취소를 위한 ApplymentCancelUI boundary클래스 정의
class ApplymentCancelUI {
	private:
		ApplymentCancel* applymentCancel;
		int cancelNum = NULL;
	public:
		void putBusinessNum(ApplymentCancel *control);
};