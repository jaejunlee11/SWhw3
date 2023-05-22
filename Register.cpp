// 헤더 선언
#include <stdio.h>
#include <string.h>
using namespace std;

#include "Register.h"
#include "BusinessUser.h"
#include "NormalUser.h"

void BusinessRegister(string ID, string PW, string Name, int BizNo)
{
 newuser = BusinessUser(ID,PW,Name,BizNo);
 Users.add(newuser);
};

void BusinessRegister(string ID, string PW, string Name, int SSN)
{
  newuser = NormalUser(ID,PW,Name,SSN);
  Users.add(newuser);
};

