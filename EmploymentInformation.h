#include <iostream>
#include <string>
#define MAX_STRING 32
using namespace std;
class EmploymentInformation{
    private:
        string work;
        int peopleNumber;
        string deadline;
        string name;
        bool isClosed;
        int businessNumber;
    public:
        EmploymentInformation(string work,int peopleNumber,string deadline,string name,bool isClosed,int businessNumber);
        
};