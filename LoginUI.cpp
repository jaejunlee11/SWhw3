// 헤더 선언
#include "LoginUI.h"
#include "Login.h"
#include <string>
using namespace std;
// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
/*
	함수 이름 : LoginUI::performLoginProcess()
	기능	  : 로그인 과정 수행
	전달 인자 : 
	반환값    : 없음
*/
void LoginUI::showLoginProcess(Login *loginControl)
{
	login=loginControl;
	// 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	string id,pw;

	fscanf(in_fp, "%s %s", id, pw);
    login->performLoginProcess(id,pw);
	// 출력
	fprintf(out_fp, "2.1 로그인\n");
	fprintf(out_fp, "%s %s\n", id,pw);
};