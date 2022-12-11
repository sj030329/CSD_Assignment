#include <iostream>
#include <string>
#include "swap.h"

void swapString(std::string& s1, std::string& s2){
        string temp = s1;
        s1 = s2;
        s2 = temp;
}
