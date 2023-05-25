#include <iostream>
#include "ApplymentInformation.h"
/*
	함수 이름 : ApplymentInformation::getApplymentInformation()
	기능	  : ApplymentInformation에서 정보 추출 기능
	전달 인자 : 없음
	반환값    : format형 지원정보
*/
format ApplymentInformation::getApplymentInformation() {
	x.name = this->name;
	x.businessNum = this->businessNumber;
	x.work = this->work;
	x.pNum = this->peopleNumber;
	x.isCancel = this->isCancel;
	x.deadline = this->deadline;
	return x;
}
/*
	함수 이름 : ApplymentInformation::cancelApplymentInformation()
	기능	  : 특정 지원정보 취소 기능
	전달 인자 : 없음
	반환값    : 없음
*/
void ApplymentInformation::cancelApplymentInformation() {
	isCancel = true;
}
/*
	함수 이름 : ApplymentInformation::ApplymentInformation()
	기능	  : 생성자
	전달 인자 : work->업무, peopleNumber->인원수, deadline->신청마감일, name->회사이름, isCancel->취소여부, businessNumber->사업자 번호
*/
ApplymentInformation:: ApplymentInformation(string work, int peopleNumber, string deadline, string name,bool isCancel, int businessNumber){
	this->work=work;
	this->peopleNumber=peopleNumber;
	this->deadline=deadline;
	this->name=name;
	this->isCancel=isCancel;
	this->businessNumber=businessNumber;
};