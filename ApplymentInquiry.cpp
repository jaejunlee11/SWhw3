#include <iostream>
#include <algorithm>
#include "ApplymentInquiry.h"
#include "NormalUser.h"

int cmp(format a, format b)
{
	return a.name < b.name;
}

void ApplymentInquiry::run(NormalUser*normaluser) {
	applymentInquiryUI=ApplymentInquiryUI();
	format infoArr[50];
	
	this->normalUser = normaluser;
	applyInfoCollection = normalUser->listApplymentInformation();

	ApplymentInformation applyInfo = applyInfoCollection.findFirst();
	infoArr[0] = applyInfo.getFormat();
	int count = applyInfoCollection.getSize();

	for (int i = 1; i < count; i++) {
		applyInfo = applyInfoCollection.getNext();
		infoArr[i] = applyInfo.getFormat();
	}

	sort(infoArr, infoArr + count, cmp);

	applymentInquiryUI.showApplymentList(infoArr, count);
}

