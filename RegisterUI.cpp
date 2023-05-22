// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "RegisterUI.h"
#include "Register.h"

void RequestRegister(int choice, string id, string pw, string name, int unino, User* userlist,int membernum)
{
    if(choice == 1)
    {
        BusinessRegister(id,pw,name,unino,userlist,membernum);
    }
    else if(choice == 2)
    {
        NormalRegister(id,pw,name,unino,userlist,membernum);
    }
};


