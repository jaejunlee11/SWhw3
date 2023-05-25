#include "NormalUserCollection.h"

/*
	함수 이름 : NormalUserCollection::addNewNormalUser()
	기능	  : Normal User List 배열의 빈 가장 앞 부분에 NormalUser 저장
	전달 인자 : string name/이름, int SSN/주민번호, string id/ ID, string pw / PW 
    반환값 : 없음
*/
void NormalUserCollection::addNewNormalUser(string name, int SSN, string id, string pw)
{
    managedNormalUser[numNormalUser]=new NormalUser(name,SSN,id,pw);
    numNormalUser++;
};

/*
	함수 이름 : NormalUserCollection::findFirst()
	기능	  : Normal User List 배열의 가장 앞 부분을 반환함.
	전달 인자 : 없음
    반환값 : NormalUser* managedNormalUser[0]
*/
NormalUser* NormalUserCollection::findFirst() 
{
    now = 0;
    return managedNormalUser[0];
};

/*
	함수 이름 : NormalUserCollection::getNext()
	기능	  : Normal User List 배열의 현재 위치를 바로 뒤로 변경함.
	전달 인자 : 없음
    반환값 : NormalUser* managedNormalUser[now]
*/

NormalUser* NormalUserCollection::getNext()
{
    now++;
    return managedNormalUser[now];
}

/*
	함수 이름 : NormalUserCollection::getSize()
	기능	  : NormalUser의 수를 반환함
	전달 인자 : 없음
    반환값 : int numNormalUser;
*/

int NormalUserCollection::getSize()
{
    return numNormalUser;
}

/*
	함수 이름 : NormalUserCollection::findNormalUser()
	기능	  : Normal User List에서 전달 인자와 동일한 id/pw값을 가진 NormalUser를 탐색함.
	전달 인자 : string id/ID, string pw/PW
    반환값 : NormalUser* checkuser
*/

NormalUser* NormalUserCollection::findNormalUser(string id, string pw)
{
    NormalUser* checkuser;
    checkuser = this->findFirst();
    int i=0;
    while(checkuser->checkIDInfo(id,pw)!=true && i<numNormalUser)
    {
        checkuser = this->getNext();
        i++;
    }
    if(i<numNormalUser)
    {
        return checkuser;
    }
}