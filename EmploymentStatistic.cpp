// 헤더 선언
#include "EmploymentStatistic.h"
#include "EmploymentInformation.h"
#include "EmploymentStatisticUI.h"

/*
	함수 이름  : EmploymentStatistic::run()
	기능	  : control class생성 후 채용정보통계기능 실행
	전달 인자 : bussinessUser->현재 로그인한 businessUser
	반환값    : 없음
*/
void EmploymentStatistic::run(BusinessUser *businessUser){
    //현재 로그인 중인 user
    this->businessUser=businessUser;
    //ui 인스턴스 생성
    employmentStatisticUI=EmploymentStatisticUI();
    //구조체를 담을 배열
    Employee infoArr[50];
    //업무와 업무별 지원자수를 저장할 배열
	string work[50];
    int people[50];
    int workCount=0;
    bool newWork=true;
    //user의 listEmploymentInformation을 저장
	employmentInformationCollection = businessUser->listEmploymentInformation();
    //리스트를 loop를 돌며 모든 채용 정보 통계 저장
	EmploymentInformation employInfo = employmentInformationCollection.findFirst();
	infoArr[0] = employInfo.getEmploymentInformation();
    work[workCount]=infoArr[0].work;
    people[workCount]=infoArr[0].peopleNumber;
    workCount+=1;
	int count = employmentInformationCollection.getSize();
	for (int i = 1; i < count; i++) {
        newWork=true;
		employInfo = employmentInformationCollection.getNext();
		infoArr[i] = employInfo.getEmploymentInformation();
        for(int j=0; j<workCount;j++){
            if(work[j]==infoArr[i].work){
                people[j]+=infoArr[i].peopleNumber;
                newWork=false;
                break;
            }
        }
        if(newWork){
            work[workCount]=infoArr[i].work;
            people[workCount]=infoArr[i].peopleNumber;
            workCount+=1;
        }
	}
    //ui를 통해 출력
    employmentStatisticUI.showEmploymentStatistics(work,people,workCount);

};
