// 헤더 선언
#include "ApplymentStatistics.h"
/*
	함수 이름  : ApplymentStatistics::run()
	기능	  : control class생성 후 지원정보통계기능 실행
	전달 인자 : normalUser->현재 로그인한 normalUser
	반환값    : 없음
*/
void ApplymentStatistics::run(NormalUser *normalUser){
    //현재 로그인 중인 user
    this->normalUser=normalUser;
    //ui 인스턴스 생성
    applymentStatisticsUI=ApplymentStatisticsUI();
    //구조체를 담을 배열
    format infoArr[50];
    //업무와 업무별 지원횟수를 저장할 배열
	string work[50];
    int applyTime[50];
    int workCount=0;
    bool newWork=true;
    //user의 listEmploymentInformation을 저장
	applymentInformationCollection = normalUser->listApplymentInformation();
    //리스트를 loop를 돌며 모든 지원 정보 통계 저장
    ApplymentInformation* applyInfo = applymentInformationCollection.findFirst();
	infoArr[0] = applyInfo->getApplymentInformation();
    work[workCount]=infoArr[0].work;
    applyTime[workCount]=1;
    workCount+=1;
	int count = applymentInformationCollection.getSize();
	for (int i = 1; i < count; i++) {
        newWork=true;
		applyInfo = applymentInformationCollection.getNext();
		infoArr[i] = applyInfo->getApplymentInformation();
        for(int j=0; j<workCount;j++){
            if(work[j]==infoArr[i].work){
                applyTime[j]+=1;
                newWork=false;
                break;
            }
        }
        if(newWork){
            work[workCount]=infoArr[i].work;
            applyTime[workCount]=1;
            workCount+=1;
        }
	}
    //ui를 통해 출력
    applymentStatisticsUI.showApplymentStatistics(work,applyTime,workCount);

};