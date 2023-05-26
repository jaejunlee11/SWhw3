#include "ApplymentInformationCollection.h"

/*
	함수 이름 : ApplymentInformationCollection::getSize()
	기능	  : numApplymentInformation return
	전달 인자 : 없음
	반환값    : numApplymentInformation
*/
int ApplymentInformationCollection::getSize(){
    return numApplymentInformation;
}

/*
	함수 이름 : ApplymentInformationCollection::findFirst()
	기능	  : numEmploymentInformation의 첫번째를 return
	전달 인자 : 없음
	반환값    : managedApplymentInformation[0]
*/
ApplymentInformation* ApplymentInformationCollection::findFirst(){
    now+=1;
    return managedApplymentInformation[now];
};
/*
	함수 이름 : ApplymentInformationCollection::getNext()
	기능	  : numEmploymentInformation의 다음 것을 return
	전달 인자 : 없음
	반환값    : managedApplymentInformation[now]->출력하고 다음 것을 리턴
*/
ApplymentInformation* ApplymentInformationCollection::getNext(){
    now=0;
    return managedApplymentInformation[0];
};
/*
	함수 이름 : ApplymentInformationCollection::addApplymentInformation()
	기능	  : 생성한 addApplymentInformation 배열에 저장
	전달 인자 : work->업무, peopleNumber->인원수, deadline->신청마감일, companyName->회사이름, businessNumber->사업자 번호
	반환값    : 없음
*/
ApplymentInformation ApplymentInformationCollection:: addApplymentInformation(string work, int peopleNumber, string deadline, string companyName, int businessNumber){
    managedApplymentInformation[numApplymentInformation]= new ApplymentInformation(work,peopleNumber,deadline,companyName,false,businessNumber);
    numApplymentInformation+=1;
};
