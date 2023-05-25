//중복방지
#pragma once
#include <iostream>
#include "ApplymentCancel.h"
// 전방 선언
class ApplymentCancel;
// 지원 취소를 위한 ApplymentCancelUI boundary클래스 정의
class ApplymentCancelUI {
	private:
		ApplymentCancel* applymentCancel;
		int cancelNum;
	public:
		void putBusinessNum(ApplymentCancel *control);
};