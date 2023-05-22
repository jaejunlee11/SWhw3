// 헤더 선언
#include <iostream>
#include <string>
using namespace std;
//구조체 정의
struct Employee
{
    short id;
    int age;
    double wage;
};
// 채용정보를 위해 EmploymentInformation 클래스 정의
class EmploymentInformation{
    private:
        string work;
        int peopleNumber;
        string deadline;
        string companyName;
        int businessNumber;
    public:
        EmploymentInformation(string work,int peopleNumber,string deadline,string companyName,int businessNumber);
        Employee getEmploymentInformation();
};