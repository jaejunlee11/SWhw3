#include "NormalUserCollection.h"

void NormalUserCollection::addNewNormalUser(string name, int SSN, string id, string pw)
{
    managedNormalUser[numNormalUser]=new NormalUser(name,SSN,id,pw);
    numNormalUser++;
};


NormalUser* NormalUserCollection::findFirst() 
{
    now = 0;
    return managedNormalUser[0];
};

NormalUser* NormalUserCollection::getNext()
{
    now++;
    return managedNormalUser[now];
}

int NormalUserCollection::getSize()
{
    return numNormalUser;
}