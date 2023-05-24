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
	isCancel = true;
}

ApplymentInformation:: ApplymentInformation(string work, int peopleNumber, string deadline, string name,bool isCancel, int businessNumber){
	this->work=work;
	this->peopleNumber=peopleNumber;
	this->deadline=deadline;
	this->name=name;
	this->isCancel=isCancel;
	this->businessNumber=businessNumber;
};