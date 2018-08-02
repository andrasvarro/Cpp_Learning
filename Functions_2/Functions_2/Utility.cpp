#include <iostream>
using std::cout;
using std::endl;

#include"Utility.h"

bool IsPrime(int x)
{
    bool prime = true;
    for (int i = 2; i <= x/i; i++)
    {
        int factor = x / i;
        if (factor*i == x)
        {
            cout << "factor found: " << factor << endl;
            prime = false;
            break;
        }
    }

    return prime;
}

bool Is2MorePrime(int const& x)
{
    //const ref cannot be changed!
    //x = x + 2;
    int y = x + 2;
    return IsPrime(y);
}

// returns a dangling reference, since 'a' goes out of scope
int& BadFunction()
{
    int a = 3;
    return a;
}