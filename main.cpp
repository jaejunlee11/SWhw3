// 헤더 선언
#include <iostream>
#include <string>
#include "BusinessUser.h"
#include "NormalUser.h"
#include "EmploymentRegister.h"
#include "EmploymentStatistic.h"
#include "ApplymentStatistics.h"
#include "UserRegister.h"
#include "user.h"
#include "Logout.h"
#include "Dropout.h"
#include "Login.h"
#include "ApplymentCancel.h"
#include "BusinessUserCollection.h"
#include "NormalUserCollection.h"
#include "InquiryEmploymentList.h"
#include "EmploymentInfoSearch.h"
#include "ApplymentInquiry.h"
using namespace std;
// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
#define MAX_NUMBER_OF_USERS 50
// 함수 선언
void doTask();
void program_exit();

// 변수 선언
FILE* in_fp, *out_fp;
BusinessUser* currentUserB; //현재 로그인 중인 User
NormalUser* currentUserN;
BusinessUserCollection businessList[MAX_NUMBER_OF_USERS];
NormalUserCollection normalList[MAX_NUMBER_OF_USERS];


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
                        //user 선택을 위한 변수
                        int choice=0;
                        fscanf(in_fp, "%d", &choice);
                        if (choice==1){
                            UserRegister userRegister;
                            userRegister.businessRun(businessList);
                        }else if (choice==2){
                            UserRegister UserRegister;
                            UserRegister.normalRun(normalList);
                        }
                        break;
                    }
                    case 2: // 1.2. 회원 탈퇴 메뉴 부분
                    {
                        if(currentUserB != NULL)
                        {
                            Dropout dropout;
                            dropout.businessRun(currentUserB);
                        }
                        else
                        {
                            Dropout Dropout;
                            Dropout.normalRun(currentUserN);
                        }
                        break;
                    }
                }
            case 2:
                 switch(menu_level_2)
                {
                    case 1:// "2.1. 로그인“ 메뉴 부분
                    {   
                        Login login;
                        login.run(currentUserB,currentUserN,businessList,normalList);
                    }
                    case 2: // 2.2 로그아웃 메뉴 부분
                    {
                        if(currentUserB != NULL)
                        {
                            Logout logout;
                            logout.businessRun(currentUserB);
                        }
                        else
                        {
                            Logout Logout;
                            Logout.normalRun(currentUserN);
                        }
                        break;
                    }                
            }
            case 3:
            {
                switch(menu_level_2)
                {
                    case 1:// "3.1. 채용 정보 등록“ 메뉴 부분
                    {
                        EmploymentRegister employmentRegistercontrol;
                        employmentRegistercontrol.run(currentUserB);
                        break;
                    }
                    case 2:// "3.2. 등록된 채용 정보 조회“ 메뉴 부분
                    {
                        InquiryEmploymentList inquiryEmploymentList;
                        inquiryEmploymentList.run(currentUserB);
                        break;
                    }
                }
            }
            case 4:
            {
                switch(menu_level_2)
                {
                    case 1:// "4.1. 채용 정보 검색" 메뉴 부분
                    {
                        EmploymentInfoSearch employmentInfoSearch;
                        employmentInfoSearch.run(businessUserCollection);
                        break;
                    }
                    case 2:// "4.2. 채용 지원“ 메뉴 부분
                    {
                        break;
                    }
                    case 3:// "4.3. 지원 정보 조회“ 메뉴 부분
                    {
                        ApplymentInquiry applymentInquiry;
                        applymentInquiry.run();
                        break;
                    }
                    case 4:// "4.4. 지원 취소“ 메뉴 부분
                    {   
                        ApplymentCancel applymentCancel;
                        applymentCancel.run(currentUserN);
                        break;
                    }                                                            
                }
            }
            case 5:
            {
                switch(menu_level_2)
                {
                    case 1:// "5.1. 지원 정보 통계“ 메뉴 부분
                    {
                        if(currentUserN==NULL){
                            EmploymentStatistic employmentStatisticsControl;
                            employmentStatisticsControl.run(currentUserB);
                        }else{
                        ApplymentStatistics applymentStatisticsControl;
                        applymentStatisticsControl.run(currentUserN);
                        }
                        break;
                    }
                }
            }
            case 6:
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
}
void program_exit()
{

}