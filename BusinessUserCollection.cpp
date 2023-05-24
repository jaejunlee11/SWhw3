#include "BusinessUserCollection.h"




BusinessUser* BusinessUserCollection::findFirst() 
{
    return managedBusinessUser[0];
};

BusinessUser* BusinessUserCollection::getNext(int now)
{
    now++;
    return managedBusinessUser[now];
}