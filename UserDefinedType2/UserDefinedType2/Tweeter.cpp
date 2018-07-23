#include "Tweeter.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Tweeter::Tweeter(string first, string last, int arbitrary, string handle) : Person(first, last, arbitrary), twitterhandle(handle)
{
    cout << "constructing tweeter " << getName() << " with handle " << twitterhandle << endl;

}

Tweeter::~Tweeter()
{
    cout << "destructing tweeter " << getName() << " with handle " << twitterhandle << endl;
}