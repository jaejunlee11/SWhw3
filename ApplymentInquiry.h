#include <iostream>
#include <string>
#include "ApplymentInformation.h"
#include "NormalUser.h"


using namespace std;

class ApplymentInquiry {
private:
    NormalUser* normalUser;
    ApplymentInformation applymentInformation;
public:
    void run();

};