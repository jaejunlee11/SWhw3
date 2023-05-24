//중복방지
#pragma once
#include <iostream>
#include "ApplymentCancel.h"

class ApplymentCancel;

class ApplymentCancelUI {
	private:
		ApplymentCancel* applymentCancel;
		int cancelNum = NULL;
	public:
		void putBusinessNum(ApplymentCancel *control);
};