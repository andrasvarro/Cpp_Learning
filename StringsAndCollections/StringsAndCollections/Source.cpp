#include<string>
#include<iostream>

using namespace std;
int main()
{
    string name;
    cout << "Who are you?";
    cin >> name;
    string greeting = "Hello " + name;
    if (name == "Andras")
    {
        greeting += ", I know you!";
    }
    
    cout << greeting << endl;
    return 0;
}