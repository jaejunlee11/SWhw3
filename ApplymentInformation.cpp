#include <iostream>
#include "ApplymentInformation.h"


void ApplymentInformation::getApplymentInformation() {

}



format ApplymentInformation::getFormat() {
	x.name = this->name;
	x.businessNum = this->businessNumber;
	x.work = this->work;
	x.pNum = this->peopleNumber;
	x.deadline = this->deadline;
	return x;
}