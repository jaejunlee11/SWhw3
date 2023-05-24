#include "InquiryEmploymentListUI.h"
#include <string>
using namespace std;
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void InquiryEmploymentListUI::showEmploymentList(format infoArr[], int count) {
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");
    for (int i = 0; i < count; i++) {
        fprintf(out_fp, "%s %d %s\n", infoArr[i].work, infoArr[i].peopleNumber, infoArr[i].deadline);
    }
};