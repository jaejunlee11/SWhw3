// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "RegisterUI.h"
#include "Register.h"

//상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

/*
	함수 이름 : UserRegisterUI:newuserregister()
	기능	  : 사용자로부터 선택지와 ID,PW,이름,식별 번호등의 정보를 입력받아 새로운 회원을 등록함
	전달 인자 : UserRegisterControl->control class의 instance
	반환값    : 없음
*/

void UserRegisterUI::newUserRegister(UserRegister *userRegisterControl)
{
    userRegister=userRegisterControl;
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    string name, id, pw;
    int choice, unino;
    fscanf(in_fp, "%d %s %d %s %s", choice, &name, unino, &id, &pw);
    if(choice == 1)
    {
        userRegister->addBusinessUser(name,unino,id,pw);
    }
    else if(choice ==2)
    {
        userRegister->addNormalUser(name,unino,id,pw);
    }
    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "%d %s %d %s %s", choice, &name, unino, &id, &pw, "\n");



};

/*
void RequestRegister(int choice, string id, string pw, string name, int unino, User* userlist,int membernum)
{
    if(choice == 1)
    {
        BusinessRegister(id,pw,name,unino,userlist,membernum);
    }
    else if(choice == 2)
    {
        NormalRegister(id,pw,name,unino,userlist,membernum);
    }
};

*/
