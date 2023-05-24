#include "ApplymentCancel.h"
#include <string>
using namespace std;

format ApplymentCancel::cancelApplyment(int cancelNum) {
	format infoArr[50];
	ApplymentInformation* applyInfo = applyInfoCollection.findFirst();
	infoArr[0] = applyInfo->getApplymentInformation();
	int count = applyInfoCollection.getSize();

	if (infoArr[0].businessNum == cancelNum) {
		applyInfo->cancelApplymentInformation();
		return infoArr[0];
	}

	for (int i = 1; i < count; i++) {
		applyInfo = applyInfoCollection.getNext();
		infoArr[i] = applyInfo->getApplymentInformation();
		if (infoArr[i].businessNum == cancelNum) {
			applyInfo->cancelApplymentInformation();
			return infoArr[i];
		}
	}
}

void ApplymentCancel::run(NormalUser *normaluser) {
	this->normalUser = normaluser;
	applyInfoCollection = normalUser->listApplymentInformation();
	applymentCancelUI = ApplymentCancelUI();
	applymentCancelUI.putBusinessNum(this);
}