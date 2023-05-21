// 헤더 선언
#include <stdio.h>
#include <string.h>
using namespace std;

#include "RegisterUI.h"
#include "User.h"

void Dropout(string ID)
{
    User.RevokePermission(ID);
}
