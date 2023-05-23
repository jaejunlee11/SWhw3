#include "ApplymentCancel.h"
#include <string>
using namespace std;

void ApplymentCancel::cancelApplyment(int cancelNum) {
	format infoArr[0] = applyInfo.getFormat();
	int count = applyInfoCollection.getSize();

	if (infoArr[0].businessNum == cancelNum) {
		applyInfo->cancelApplymentInformation();
		return;
	}

	for (int i = 1; i < count; i++) {
		applyInfo = applyInfoCollection.getNext();
		infoArr[i] = applyInfo.getFormat();
		if (infoArr[i].businessNum == cancelNum) {
			applyInfo->cancelApplymentInformation();
			return;
		}
	}
}

void ApplymentCancel::run(NormalUser *normaluser) {
	this->normalUser = normaluser;
	applyInfoCollection = normalUser->listApplymentInformation();
	applymentCancelUI = ApplymentCancelUI();
	applymentCancelUI.putBusinessNum(this);
	
	
}