#include "EmploymentInfoSearch.h"
#include <string>
using namespace std;
/*
	함수 이름 : EmploymentInfoSearch::findEmploymentInformation()
	기능	  : 검색한 회사이름이 일치하는 채용 정보 리스트 반환
	전달 인자 : companyName->회사 이름
	반환값    : findArr -> 채용 정보 리스트
*/
Employee* EmploymentInfoSearch::findEmploymentInformation(string companyName) {
	Employee findArr[50];
	findCount=0;
    businessUser = businessUserCollection->findFirst();
	int count=businessUserCollection->getSize();
	employInfoCollection=businessUser->listEmploymentInformation();
	employInfo = employInfoCollection.findFirst();
	Employee infoArr[50];
	infoArr[0] = employInfo->getEmploymentInformation();
	int count = employInfoCollection.getSize();
	if (infoArr[0].companyName == companyName) {
		findArr[findCount]=infoArr[0];
		findCount+=1;
	}
	for (int j = 1; j < count; j++) {
		employInfo = employInfoCollection.getNext();
		infoArr[j] = employInfo->getEmploymentInformation();
		if (infoArr[j].companyName == companyName) {
			findArr[findCount]=infoArr[j];
			findCount+=1;
		}
	}
	for (int i=1; i< count; i++){
		businessUser = businessUserCollection->getNext();
		int count=businessUserCollection->getSize();
		employInfoCollection=businessUser->listEmploymentInformation();
		employInfo = employInfoCollection.findFirst();
		Employee infoArr[50];
		infoArr[0] = employInfo->getEmploymentInformation();
		int count = employInfoCollection.getSize();
		if (infoArr[0].companyName == companyName) {
			findArr[findCount]=infoArr[0];
			findCount+=1;
		}
		for (int j = 1; j < count; j++) {
			employInfo = employInfoCollection.getNext();
			infoArr[j] = employInfo->getEmploymentInformation();
			if (infoArr[j].companyName == companyName) {
				findArr[findCount]=infoArr[j];
				findCount+=1;
			}
		}
	}
	return findArr;
}
/*
	함수 이름 : EmploymentInfoSearch::findCountSize()
	기능	  : 검색한 회사이름이 일치하는 채용 정보 리스트 크기 반환
	전달 인자 : 없음
	반환값    : findCount->채용 정보 리스트 크기
*/
int EmploymentInfoSearch::findCountSize(){
	return findCount;
};
/*
	함수 이름 : EmploymentInfoSearch::run()
	기능	  : control class 생성 후 채용 정보 검색 시작
	전달 인자 : businessUserCollection->business user 정보가 모두 담긴 collection
	반환값    : 없음
*/
void EmploymentInfoSearch::run(BusinessUserCollection* businessUserCollection) {
	this->businessUserCollection = businessUserCollection;
	employmentInfoSearchUI = EmploymentInfoSearchUI();
	employmentInfoSearchUI.inputEmploymentInformation(this);
}
