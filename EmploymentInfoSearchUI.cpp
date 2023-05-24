#include "EmploymentInfoSearchUI.h"
#include "EmploymentInfoSearch.h"
#include <string>
using namespace std;
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


void EmploymentInfoSearchUI::inputEmploymentInformation(EmploymentInfoSearch* employmentSearchControl)
{
	employmentSearch = employmentSearchControl;
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	string companyName, wokr, deadline;
	int peopleNumber, businessNumber;

	fscanf(in_fp, "%s", companyName);
	employmentSearch->findEmploymentInformation(companyName, businessNumber, work, peopleNumber, deadline);
	fprintf(out_fp, "4.1. 채용 정보 검색\n");
	fprintf(out_fp, "%s %d %s %d %s", companyName, businessNumber, work, peopleNumber, deadline);
};