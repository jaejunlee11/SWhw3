//헤더 선언
#include "ApplymentInquiryUI.h"
#include <string>
using namespace std;
//변수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
/*
	함수 이름 : ApplymentInquirylUI::showApplymentList()
	기능	  : 사업자 번호 입력 받아 control class에 전달 및 기능이 결과 출력 기능
	전달 인자 : infoArr[]->지원 정보 추출 리스트, count->리스트에 들어있는 수
	반환값    : 없음
*/
void ApplymentInquiryUI::showApplymentList(format infoArr[], int count) {
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	string businessName, work;
	int businessNum;

	fprintf(out_fp, "4.3.지원 정보 조회\n");
	for (int i = 1; i < count; i++) {
		if (infoArr[i].isCancel == false) {
			fprintf(out_fp, "%s %d %s %d %s\n", infoArr[i].name, infoArr[i].businessNum, infoArr[i].work, infoArr[i].pNum, infoArr[i].deadline);
		}
	}
};

