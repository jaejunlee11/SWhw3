#include "NormalUser.h"
#include "ApplymentInformation.h"
using namespace std;

NormalUser::NormalUser(string name, int SSN, string id, string pw)
{
this->name = name;
this->ssn = SSN;
this->id = id;
this->pw = pw;
}


void NormalUser::addApplymentInformation() {

}

ApplymentInformationCollection NormalUser::listApplymentInformation() {
	//ApplymentInformation *curInfo;
	//curInfo = manageApplymentInformation.findFirst();
	//curInfo->getApplymentInformation();

	return manageApplymentInformation;
}