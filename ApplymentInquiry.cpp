#include <iostream>
#include <algorithm>
#include "ApplymentInquiry.h"

/*
	�Լ� �̸�  : cmp()
	���	  : �������� ��ȸ �� ȸ���̸��� ���� �������� ���� ���
	���� ���� : a->��������1, b->��������2
	��ȯ��    : int
*/
int cmp(format a, format b)
{
	return a.name < b.name;
}

/*
	�Լ� �̸�  : ApplymentInquiry::run()
	���	  : control class ���� �� �������� ��ȸ ��� ����
	���� ���� : normaluser -> ���� �α����� normalUser
	��ȯ��    : ����
*/
void ApplymentInquiry::run(NormalUser*normaluser) {
	applymentInquiryUI=ApplymentInquiryUI();
	format infoArr[50];
	
	this->normalUser = normaluser;
	applyInfoCollection = normalUser->listApplymentInformation();

	ApplymentInformation* applyInfo = applyInfoCollection.findFirst();
	infoArr[0] = applyInfo->getApplymentInformation();
	int count = applyInfoCollection.getSize();

	for (int i = 1; i < count; i++) {
		applyInfo = applyInfoCollection.getNext();
		infoArr[i] = applyInfo->getApplymentInformation();
	}

	sort(infoArr, infoArr + count, cmp);

	applymentInquiryUI.showApplymentList(infoArr, count);
}

