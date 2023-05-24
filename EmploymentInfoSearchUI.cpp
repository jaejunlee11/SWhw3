#include "EmploymentInfoSearchUI.h"
#include <string>
using namespace std;
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


void EmploymentInfoSearchUI::inputEmploymentInformation(EmploymentInfoSearch* control)
{
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	fscanf(in_fp, "%s", companyName);
	control.findEmploymentInformation(companyName);
	fprintf(out_fp, "4.1. 채용 정보 검색\n");
	fprintf(out_fp, "%s %d %s %d %s", infoArr[i].companyName, infoArr[i].businessNumber, infoArr[i].work, infoArr[i].peopleNumber, infoArr[i].deadline);
};