#include "EmploymentInfoSearch.h"
#include <string>
using namespace std;

void EmploymentInfoSearch::findEmploymentInformation(string companyName) {
	format infoArr[0] = employInfo.getEmployee();
	int count = employInfoCollection.getSize();

	if (infoArr[0].companyName == companyName) {
		employInfo->getEmploymentInformation();
		return;
	}
	
	for (int i = 1; i < count; i++) {
		employInfo = employmentInformationCollection.getNext();
		infoArr[i] = employInfo.getEmployee();
		if (infoArr[i].companyName == companyName) {
			employInfo->getEmploymentInformation();
			return;
		}
	}
}


void EmploymentInfoSearch::run(BusinessUser* businessUser) {
	this->businessUser = businessUser;
	employInfoCollection = businessUser->listEmploymentInformation();
	employmentInfoSearchUI = EmploymentInfoSearchUI();
	employmentInfoSearchUI.inputEmploymentInformation(this);
}
