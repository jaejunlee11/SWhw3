#include "ApplymentCancelUI.h"
#include "ApplymentInformation.h"
#include <string>
using namespace std;
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void ApplymentCancelUI::putBusinessNum(ApplymentCancel *control) {
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	fscanf(in_fp, "%d", &cancelNum);
	format info=control->cancelApplyment(cancelNum);
	fprintf(out_fp, "4.4. ���� ���\n");
	fprintf(out_fp, "%s %d %s\n", info.name, info.businessNum, info.work);
};