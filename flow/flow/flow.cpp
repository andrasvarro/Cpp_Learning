#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int answer;
    bool keepgoing = true;

    for (int loop = 0; loop < 10; loop++)
    {
        cout << loop << " ";
    }

    while (keepgoing)
    {
        cout << "Enter a number: ";
        cin >> i;
        cout << endl<<"You entered " << i << ". Enter another number: ";
        cin >> j;
        cout << endl<<"You entered " << j;
        if (i < j)
        {
            cout << j << " is greater than " << i;

        }
        else if (i > j)
        {
            cout << i << " is greater than " << j;

        }
        else
        {
            cout << j << " is equal to " << i;

        }

        cout << "Compare another? 0 for no: ";
        cin >> answer;
        keepgoing = answer != 0;
    }
    return 0;
}