//헤더 선언
#include "InquiryEmploymentListUI.h"
#include <string>
using namespace std;
//변수를 위한 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
/*
	함수 이름 : InquiryEmploymentList::showEmploymentList()
	기능	  : 등록된 채용 정보 출력
	전달 인자 : infoArr[]->채용 정보를 담은 리스트 , count->리스트에 들어있는 수
	반환값    : 없음
*/
void InquiryEmploymentListUI::showEmploymentList(Employee infoArr[], int count) {
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");
    for (int i = 0; i < count; i++) {
        fprintf(out_fp, "%s %d %s\n", infoArr[i].work, infoArr[i].peopleNumber, infoArr[i].deadline);
    }
};