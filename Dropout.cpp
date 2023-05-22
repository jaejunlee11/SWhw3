// 헤더 선언
#include <stdio.h>
#include <string.h>
using namespace std;

#include "User.h"
#include "User.cpp"


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
}