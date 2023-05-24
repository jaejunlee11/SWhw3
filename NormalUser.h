//중복방지
#pragma once
#include <iostream>
#include <string>
#include "user.h"
#include "ApplymentInformationCollection.h"

using namespace std;

class NormalUser: public User {
	private:
		string name;
		int ssn;
		ApplymentInformationCollection manageApplymentInformation;
	public:
		NormalUser();
		NormalUser(string name, int ssn, string id, string pw);
		ApplymentInformationCollection listApplymentInformation();
		void addApplymentInformation();
};