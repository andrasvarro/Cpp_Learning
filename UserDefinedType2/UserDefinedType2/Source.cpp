#include "Tweeter.h"
#include <iostream>
int main()
{
    Person p1("Andras", "Varro", 123);
    {
        Tweeter t1("Someone", "Else", 456, "@whoever");
        std::string name2 = t1.getName();
    }
    
    std::cout << "after innermost block" << std::endl;

    std::string name = p1.getName();

    return 0;
}