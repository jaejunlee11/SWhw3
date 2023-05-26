//중복방지
#pragma once
#include <iostream>
#include <string>
#include "user.h"
#include "ApplymentInformationCollection.h"

using namespace std;
//일반회원 class 의 정의(User의 subclass)
class NormalUser: public User {
	private:
		string name;
		int ssn;
		ApplymentInformationCollection manageApplymentInformation;
	public:
		NormalUser();
		NormalUser(string name, int ssn, string id, string pw);
		ApplymentInformationCollection listApplymentInformation();
		void addApplymentInformation(string work,int peopleNumber,string deadline,string companyName,int businessNumber);
};