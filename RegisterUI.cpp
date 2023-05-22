// 헤더 선언
#include <stdio.h>
#include <string>
using namespace std;

#include "RegisterUI.h"
#include "Register.h"

void RequestRegister(int Choice, string ID, string PW, string Name, int UniNo)
{
    if(Choice == 1)
    {
        BusinessRegister(ID,PW,Name,UniNo);
    }
    else if(Choice == 2)
    {
        NormalRegister(ID,PW,Name,UniNo);
    }
};


