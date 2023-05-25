#include <iostream>
#include "ApplymentInformation.h"
/*
	�Լ� �̸� : ApplymentInformation::getApplymentInformation()
	���	  : ApplymentInformation���� ���� ���� ���
	���� ���� : ����
	��ȯ��    : format�� ��������
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
	�Լ� �̸� : ApplymentInformation::cancelApplymentInformation()
	���	  : Ư�� �������� ��� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void ApplymentInformation::cancelApplymentInformation() {
	isCancel = true;
}
/*
	�Լ� �̸� : ApplymentInformation::ApplymentInformation()
	���	  : ������
	���� ���� : work->����, peopleNumber->�ο���, deadline->��û������, name->ȸ���̸�, isCancel->��ҿ���, businessNumber->����� ��ȣ
*/
ApplymentInformation:: ApplymentInformation(string work, int peopleNumber, string deadline, string name,bool isCancel, int businessNumber){
	this->work=work;
	this->peopleNumber=peopleNumber;
	this->deadline=deadline;
	this->name=name;
	this->isCancel=isCancel;
	this->businessNumber=businessNumber;
};