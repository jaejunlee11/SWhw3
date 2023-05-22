#include <iostream>
#include "ApplymentInformation.h"

format ApplymentInformation::getApplymentInformation() {
	x.name = this->name;
	x.businessNum = this->businessNumber;
	x.work = this->work;
	x.pNum = this->peopleNumber;
	x.isCancel = this->isCancel;
	x.deadline = this->deadline;
	return x;
}

void ApplymentInformation::cancelApplymentInformation() {
	isCancel = 0;
}