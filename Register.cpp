// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "Register.h"
#include "BusinessUser.h"
#include "NormalUser.h"

void BusinessRegister(string id, string pw, string name, int businessnumber,User* Userlist, int membernum)
{
 newuser = BusinessUser(id,pw,name,businessnumber);
 Userlist[membernum]= newuser;
 membernum++;

};

void BusinessRegister(string id, string pw, string name, int ssn,User* Userlist, int membernum)
{
  newuser = NormalUser(id,pw,name,ssn);
  Userlist[membernum]= newuser;
  membernum++;
  };

