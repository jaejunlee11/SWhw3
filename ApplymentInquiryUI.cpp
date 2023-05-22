#include "ApplymentInquiryUI.h"
#include <string>
using namespace std;
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void ApplymentInquiryUI::showApplymentList() {
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	string businessName, work;
	int businessNum;

	fprintf(out_fp, "4.3. 지원 정보 조회\n");
	fprintf(out_fp, "%s %d %s", businessName, businessNum, work);
};

