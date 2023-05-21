#include "EmploymentRegisterUI.h"
#include <string>
using namespace std;
// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
/*
	함수 이름 : EmploymentRegisterUI::registerEmploymentInformation()
	기능	  : 회사 회원으로 부터 업무, 인원수,신청 마감일 정보를 입력 받아 새로운 채용정보를 등록
	전달 인자 : 없음
	반환값    : 없음
*/
void EmploymentRegisterUI::registerEmploymentInformation()
{
	// 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	string work, deadline;
	int peopleNumber;
	fscanf(in_fp, "%s %d %s", work, &peopleNumber, deadline);
    employmentRegister->addEmploymentInformation(work,peopleNumber,deadline);

};