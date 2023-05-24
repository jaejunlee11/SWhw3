//중복방지
#pragma once
#include <iostream>
#include <string>
#include "user.h"
#include "ApplymentInformationCollection.h"

using namespace std;

class NormalUser:User {
	private:
		string name;
		int ssn;
		ApplymentInformationCollection manageApplymentInformation;
	public:
		NormalUser(string name, int ssn, string id, string pw);
		ApplymentInformationCollection listApplymentInformation();
		void addApplymentInformation();
};