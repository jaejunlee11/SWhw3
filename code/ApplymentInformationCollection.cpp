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
