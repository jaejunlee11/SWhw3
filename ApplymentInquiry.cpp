#include <iostream>
#include <algorithm>
#include "ApplymentInquiry.h"
#include "NormalUser.h"


void ApplymentInquiry::run(NormalUser*normaluser) {
	ApplymentInformation applyInfo;
	format infoArr[];
	
	this->normalUser = normaluser;
	applyInfoCollection = normalUser->listApplymentInformation();

	applyInfo = applyInfoCollection.findFirst();
	format infoArr[0] = applyInfo.getFormat();
	int count = applyInfoCollection.getSize();

	for (i = 1; i < count; i++) {
		applyInfo = applyInfoCollection.getNext();
		infoArr[i] = applyInfo.getFormat();
	}

	int cmp(format a, format b)
	{
		return a.name < b.name;
	}

	sort(infoArr, infoArr + count, cmp);

	applymentInquiryUI.showApplymentList(infoArr, count);
}

