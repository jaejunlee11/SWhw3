#include <iostream>
#include <string>
#include "ApplymentInformation.h"
#include "NormalUser.h"

using namespace std;

class ApplymentCancel {
    private:
        NormalUser* normalUser;
        ApplymentInformation applymentInformation;
    public: 
        void cancelApplyment(int cancelNum);
        void run(normalUser);

};