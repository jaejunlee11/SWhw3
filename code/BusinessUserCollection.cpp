#include "BusinessUserCollection.h"

/*
	함수 이름 : BusinessUserCollection::addNewBusinessUser()
	기능	  : Business User List 배열의 빈 가장 앞 부분에 businessUser 저장
	전달 인자 : string name/이름, int businessnumber/사업자번호, string id/ ID, string pw / PW 
    반환값 : 없음
*/

void BusinessUserCollection::addNewBusinessUser(string name, int businessnumber, string id, string pw)
{
    managedBusinessUser[numBusinessUser]=new BusinessUser(name,businessnumber,id,pw);
    numBusinessUser++;
};

/*
	함수 이름 : BusinessUserCollection::findFirst()
	기능	  : business User List 배열의 가장 앞 부분을 반환함.
	전달 인자 : 없음
    반환값 : BusinessUser* managedBusinessUser[0]
*/
BusinessUser* BusinessUserCollection::findFirst() 
{
    now = 0;
    return managedBusinessUser[0];
};

/*
	함수 이름 : BusinessUserCollection::getNext()
	기능	  : Business User List 배열의 현재 위치를 바로 뒤로 변경함.
	전달 인자 : 없음
    반환값 : BusinessUser* managedBusinessUser[now]
*/

BusinessUser* BusinessUserCollection::getNext()
{
    now++;
    return managedBusinessUser[now];
}

/*
	함수 이름 : BusinessUserCollection::getSize()
	기능	  : BusinessUser의 수를 반환함
	전달 인자 : 없음
    반환값 : int numBusinessUser;
*/


int BusinessUserCollection::getSize()
{
    return numBusinessUser;
}

/*
	함수 이름 : BusinessUserCollection::findBusinessUser()
	기능	  : Business User List에서 전달 인자와 동일한 id/pw값을 가진 BusinessUser를 탐색함.
	전달 인자 : string id/ID, string pw/PW
    반환값 : BusinessUser* checkuser
*/


BusinessUser* BusinessUserCollection::findBusinessUser(string id, string pw)
{
    BusinessUser* checkuser;
    checkuser = this->findFirst();
    int i=0;
    while(checkuser->checkIDInfo(id,pw)!=true && i<numBusinessUser)
    {
        checkuser = this->getNext();
        i++;
    }
    if(i<numBusinessUser)
    {
        return checkuser;
    }
    return NULL;
}