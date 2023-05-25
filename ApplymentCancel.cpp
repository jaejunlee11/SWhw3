#include "ApplymentCancel.h"
#include <string>
using namespace std;

/*
	함수 이름  : ApplymentCancel::cancelApplyment()
	기능	  : 취소할 사업자 번호를 입력받아 지원 정보 취소 실행
	전달 인자 : cancelNum -> 취소할 지원의 사업자번호
	반환값    : 취소한 지원정보 format
*/
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

/*
	함수 이름  : ApplymentCancel::run()
	기능	  : control class 생성 후 지원 취소 기능 실행
	전달 인자 : normaluser -> 현재 로그인한 normalUser
	반환값    : 없음
*/
void ApplymentCancel::run(NormalUser *normaluser) {
	this->normalUser = normaluser;
	applyInfoCollection = normalUser->listApplymentInformation();
	applymentCancelUI = ApplymentCancelUI();
	applymentCancelUI.putBusinessNum(this);
}