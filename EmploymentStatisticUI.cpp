#include "EmploymentStatisticUI.h"
// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

/*
	함수 이름  : EmploymentStatisticUI::showEmploymentStatistics
	기능	  : 업무별 지원자 수 출력
	전달 인자 : work[]->업무 리스트, people[]->지원자 수 리스트, workCount->각 리스트에 들어있는 수
	반환값    : 없음
*/
void EmploymentStatisticUI::showEmploymentStatistics(string work[],int people[],int workCount){
    // 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	// 출력
	fprintf(out_fp, "5.1. 지원 정보 통계\n");
    for (int i = 0; i < workCount; i++){
        fprintf(out_fp, "%s %d %s\n", work[i], people[i]);
    }
};