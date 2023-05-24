//중복방지
#pragma once
#include <iostream>

class ApplymentCancel;

class ApplymentCancelUI {
	private:
		ApplymentCancel* applymentCancel;
		int cancelNum = NULL;
	public:
		void putBusinessNum(ApplymentCancel *control);
};