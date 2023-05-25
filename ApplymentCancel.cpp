#include "ApplymentCancel.h"
#include <string>
using namespace std;

/*
	�Լ� �̸�  : ApplymentCancel::cancelApplyment()
	���	  : ����� ����� ��ȣ�� �Է¹޾� ���� ���� ��� ����
	���� ���� : cancelNum -> ����� ������ ����ڹ�ȣ
	��ȯ��    : ����� �������� format
*/
format ApplymentCancel::cancelApplyment(int cancelNum) {
	format infoArr[50];
	applyInfo = applyInfoCollection.findFirst();
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

/*
	�Լ� �̸�  : ApplymentCancel::run()
	���	  : control class ���� �� ���� ��� ��� ����
	���� ���� : normaluser -> ���� �α����� normalUser
	��ȯ��    : ����
*/
void ApplymentCancel::run(NormalUser *normaluser) {
	this->normalUser = normaluser;
	applyInfoCollection = normalUser->listApplymentInformation();
	applymentCancelUI = ApplymentCancelUI();
	applymentCancelUI.putBusinessNum(this);
}