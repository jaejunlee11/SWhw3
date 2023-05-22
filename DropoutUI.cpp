// 헤더 선언
#include <stdio.h>
#include <string.h>
using namespace std;

#include "DropoutUI.h"
#include "Dropout.h"

void RequestDropout(string id, User* userlist)
{
    Dropout(id, userlist);
};

