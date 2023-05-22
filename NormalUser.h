#pragma once
#include <iostream>
#include <string>
#include "ApplymentInformationCollection.h"

using namespace std;

class NormalUser {
	private:
		string name;
		int ssn;
		ApplymentInformationCollection manageApplymentInformation;
	public:
		NormalUser(int id, int pw, string name, int ssn);
		ApplymentInformationCollection listApplymentInformation();
		void addApplymentInformation();
};