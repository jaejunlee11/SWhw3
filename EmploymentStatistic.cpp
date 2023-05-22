// 헤더 선언
#include "EmploymentStatistic.h"
/*
	함수 이름  : EmploymentStatistic::run()
	기능	  : control class생성 후 채용정보통계기능 실행
	전달 인자 : bussinessUser->현재 로그인한 businessUser
	반환값    : 없음
*/
void EmploymentStatistic::run(BusinessUser *businessUser){
    this->businessUser=businessUser;
};
