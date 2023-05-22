#include "ApplymentCancelUI.h"
#include <string>
using namespace std;
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void ApplymentCancelUI::putBusinessNum(int businessNum) {
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	fscanf(in_fp, "%d", &businessNum);

	fprintf(out_fp, "4.4. 지원 취소\n");
	fprintf(out_fp, "%d", businessNum);
};