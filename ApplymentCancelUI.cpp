#include "ApplymentCancelUI.h"
#include "ApplymentInformation.h"
#include <string>
using namespace std;
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

/*
	함수 이름 : ApplymentCancelUI::putBusinessNum()
	기능	  : 사업자 번호 입력 받아 control class에 전달 및 기능이 결과 출력 기능
	전달 인자 : 없음
	반환값    : 없음
*/
void ApplymentCancelUI::putBusinessNum(ApplymentCancel *control) {
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	fscanf(in_fp, "%d", &cancelNum);
	format info=control->cancelApplyment(cancelNum);
	fprintf(out_fp, "4.4. 지원 취소\n");
	fprintf(out_fp, "%s %d %s\n", info.name, info.businessNum, info.work);
};