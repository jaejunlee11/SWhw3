// 헤더 선언
#include <cstdio>
#include "DropoutUI.h"
#include "Dropout.h"
#include <string>
using namespace std;
// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

/*
	함수 이름 : DropoutUI::normalUserDropout()
	기능	  : 일반회원의 탈퇴처리
	전달 인자 :  control class dropoutcontrol
	반환값    : 없음
*/



void DropoutUI::normalUserDropout(Dropout *dropoutControl) 
{
	dropout=dropoutControl;
	// 파일 입출력을 위한 초기화
    //FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    string id;
	//fscanf(in_fp, "%s", id);
    id = dropout->deleteNormalUserPermission();
	// 출력
	fprintf(out_fp, "1.2. 회원탈퇴\n");
	fprintf(out_fp, "%s\n", id.c_str());
};

/*
	함수 이름 : DropoutUI::businessUserDropout()
	기능	  : 회사회원의 탈퇴처리
	전달 인자 :  control class dropoutcontrol
	반환값    : 없음
*/



void DropoutUI::businessUserDropout(Dropout *dropoutControl) 
{
	dropout=dropoutControl;
	// 파일 입출력을 위한 초기화
    //FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    string id;
	//fscanf(in_fp, "%s", id);
    id = dropout->deleteBusinessUserPermission();
	// 출력
	fprintf(out_fp, "1.2. 회원탈퇴\n");
	fprintf(out_fp, "%s\n", id.c_str());
};

