// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <BusinessUser.h>
#include <EmploymentRegister.h>
#include <user.h>
using namespace std;
// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
// 함수 선언
void doTask();
void RequestRegister();
void program_exit();

// 변수 선언
FILE* in_fp, *out_fp;
BusinessUser* currentUser; //현재 로그인 중인 User
// NormalUser* currntUser;
int main()
{
    // 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    doTask();
    return 0;
}

void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    while(!is_program_exit){
    // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);
        // 메뉴 구분 및 해당 연산 수행
        switch(menu_level_1)
        {
            case 1:
            {
                 switch(menu_level_2)
                {
                    case 1:// "1.1. 회원가입“ 메뉴 부분
                    {
                        // Register() 함수에서 해당 기능 수행
                        RequestRegister();
                        break;
                    }
                    case 2:
                    {
                        break;
                    }
                }
            }
            case 3:
            {
                switch(menu_level_2)
                {
                    case 1:// "3.1. 채용 정보 등록“ 메뉴 부분
                    {
                        EmploymentRegister employmentRegistercontrol;
                        employmentRegistercontrol.run(currentUser);
                        break;
                    }
                }
            }
            case 7:
            {
                switch(menu_level_2)
                {
                    case 1:// "6.1. 종료“ 메뉴 부분
                    {
                        program_exit();
                        is_program_exit = 1;
                        break;
                    }
                }
            }
        }
    }
    return;
}
void program_exit()
{

}