#include <iostream>
#include <algorithm>
#include "ApplymentInquiry.h"
#include "NormalUser.h"

/*
	함수 이름  : cmp()
	기능	  : 지원정보 조회 시 회사이름에 대한 오름차순 정렬 기능
	전달 인자 : a->지원정보1, b->지원정보2
	반환값    : int
*/
int cmp(format a, format b)
{
	return a.name < b.name;
}

/*
	함수 이름  : ApplymentInquiry::run()
	기능	  : control class 생성 후 지원정보 조회 기능 실행
	전달 인자 : normaluser -> 현재 로그인한 normalUser
	반환값    : 없음
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

