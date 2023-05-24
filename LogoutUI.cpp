// 헤더 선언
#include "LogoutUI.h"
#include "Logout.h"
#include <string>
using namespace std;
// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
/*
	함수 이름 : LogoutUI::showLogoutProcess()
	기능	  : 
	전달 인자 : 
	반환값    : 없음
*/
void LogoutUI::showLogoutProcess(Logout *LogoutControl)
{
	logout=LogoutControl;
	// 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    string id;
	// 업무, 인원수, 신청 마감일 입력
	fscanf(in_fp, "%s", id);
    logout->performLogoutProcess(id);
	// 출력
	fprintf(out_fp, "2.2. 로그아웃\n");
	fprintf(out_fp, "%s %d %s\n", id);
};