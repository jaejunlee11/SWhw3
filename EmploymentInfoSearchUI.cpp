#include "EmploymentInfoSearchUI.h"
#include <string>
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
using namespace std;
/*
	함수 이름 : EmploymentInfoSearchUI::inputEmploymentInformation()
	기능	  : 검색한 회사이름이 일치하는 채용 정보 출력
	전달 인자 : control->control class pointer
	반환값    : 없음
*/
void EmploymentInfoSearchUI::inputEmploymentInformation(EmploymentInfoSearch* control)
{
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	Employee* infoArr;
	fscanf(in_fp, "%s", companyName);
	infoArr=control->findEmploymentInformation(companyName);
	int count=control->findCountSize();
	fprintf(out_fp, "4.1. 채용 정보 검색\n");
	for(int i=0;i<count;i++){
		fprintf(out_fp, "%s %d %s %d %s", infoArr[i].companyName, infoArr[i].businessNumber, infoArr[i].work, infoArr[i].peopleNumber, infoArr[i].deadline);
	}
};