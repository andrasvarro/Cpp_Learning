#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x, y;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    cout << x << " ";
    if (x > y)
    {
        cout << "is larger than ";
    }
    else
    {
        cout << "is less than ";
    }
    cout << y << endl;

    if (x + y > 10) cout << "Thanks for choosing large numbers!" << endl;

    std::vector<int> int_v;

    for (int i: int_v)
    {

    }

    return 0;
}
