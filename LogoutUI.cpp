// 헤더 선언
#include "LogoutUI.h"
#include "Logout.h"
#include <string>
using namespace std;
// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
/*
	함수 이름 : LogoutUI::normalUserLogout()
	기능	  : 일반 회원의 로그아웃 수행하는 boundary class
	전달 인자 : control class LogoutControl
	반환값    : 없음
*/
void LogoutUI::normalUserLogout(Logout *LogoutControl)
{
	logout=LogoutControl;
	// 파일 입출력을 위한 초기화
    //FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    string id;
	//fscanf(in_fp, "%s", id);
    id = logout->performNormalUserLogout();
	// 출력
	fprintf(out_fp, "2.2. 로그아웃\n");
	fprintf(out_fp, "%s %d %s\n", id);
};

/*
	함수 이름 : LogoutUI::businessUserLogout()
	기능	  : 회사 회원의 로그아웃 수행하는 boundary class
	전달 인자 : control class LogoutControl
	반환값    : 없음
*/
void LogoutUI::businessUserLogout(Logout *LogoutControl)
{
	logout=LogoutControl;
	// 파일 입출력을 위한 초기화
    //FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    string id;
	//fscanf(in_fp, "%s", id);
    id = logout->performBusinessUserLogout();
	// 출력
	fprintf(out_fp, "2.2. 로그아웃\n");
	fprintf(out_fp, "%s %d %s\n", id);
};