#include "Tweeter.h"
#include "Status.h"
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

    Status s = Pending;
    s = Approved;
    
    FileError fe = FileError::notfound;
    fe = FileError::ok;

    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;

    return 0;
}