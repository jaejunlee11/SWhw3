//헤더 선언
#include <iostream>
#include <algorithm>
#include "InquiryEmploymentList.h"
#include "BusinessUser.h"

/*
	함수 이름 : InquiryEmploymentList::run()
	기능	  : control class생성 후 등록된 채용 정보 조회 기능 실행
	전달 인자 : businessuser->현재 로그인 되어있는 유저
	반환값    : 없음
*/
void InquiryEmploymentList::run(BusinessUser* businessuser) {
    inquiryEmploymentListUI = InquiryEmploymentListUI();
    Employee infoArr[50];

    this->businessUser = businessuser;
    employmentInformationCollection = businessUser->listEmploymentInformation();

    employinfo = employmentInformationCollection.findFirst();
    infoArr[0] = employinfo->getEmploymentInformation();
    int count = employmentInformationCollection.getSize();

    for (int i = 1; i < count; i++) {
        employinfo = employmentInformationCollection.getNext();
        infoArr[i] = employinfo->getEmploymentInformation();
    }

    inquiryEmploymentListUI.showEmploymentList(infoArr, count);

};