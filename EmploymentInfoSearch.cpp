#include "EmploymentInfoSearch.h"
#include <string>
using namespace std;

void EmploymentInfoSearch::findEmploymentInformation(string companyName) {
	Employee findArr[50];
	int findCount=0;
    businessUser = businessUserCollection->findFirst();
	int count=businessUserCollection->getSize();
	employInfoCollection=businessUser->listEmploymentInformation();
	employInfo = employInfoCollection.findFirst();
	Employee infoArr[50];
	infoArr[0] = employInfo->getEmploymentInformation();
	int count = employInfoCollection.getSize();
	if (infoArr[0].companyName == companyName) {
		findArr[findCount]=infoArr[0];
		findCount+=1;s
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
		employInfo = businessUserCollection->getNext();
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
}

void EmploymentInfoSearch::run(BusinessUser* businessUser) {
	this->businessUser = businessUser;
	employInfoCollection = businessUser->listEmploymentInformation();
	employmentInfoSearchUI = EmploymentInfoSearchUI();
	employmentInfoSearchUI.inputEmploymentInformation(this);
}
