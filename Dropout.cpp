// 헤더 선언
#include <stdio.h>
#include <string.h>
using namespace std;

#include "Dropout.h"


void Dropout::deleteUserPermission(string id)
{
    User target;
    target = userList->findUser(id);
    target->revokePermission();

};
/*
	함수 이름 : EmploymentRegister::run()
	기능	  : control class생성 후 채용정보등록 실행
	전달 인자 : businessUser->현재 로그인한 businessUser
	반환값    : 없음
*/
void Dropout::run(UserList *userList)
{
    this->userList=userList;
    dropoutUI=DropoutUI();
    dropoutUI.userDropout(this);
};

/*
User usinguser;
User checkinguser;
void FindUser(string id, User* userlist)
    {
        int i =0;
        while(&userlist[i] != NULL)
        {
            checkinguser = userlist[i];
            if(checkinguser.CheckIDInfo() == id)
            {
                usinguser = checkinguser;
            }
            i++;
        }
    }

void Dropout(string id, User* userlist)
{

    FindUser(id,userlist);
    usinguser.RevokePermission();
}*/