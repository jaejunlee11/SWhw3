#include "BusinessUserCollection.h"

void BusinessUserCollection::addNewBusinessUser(string name, int businessnumber, string id, string pw)
{
    managedBusinessUser[numBusinessUser]=new BusinessUser(name,businessnumber,id,pw);
    numBusinessUser++;
};


BusinessUser* BusinessUserCollection::findFirst() 
{
    now = 0;
    return managedBusinessUser[0];
};

BusinessUser* BusinessUserCollection::getNext()
{
    now++;
    return managedBusinessUser[now];
}

int BusinessUserCollection::getSize()
{
    return numBusinessUser;
}

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
}