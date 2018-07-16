#include<string>
#include<iostream>

using namespace std;
int main()
{
    string word1;
    string word2;
    cout << "Please enter the first word: ";
    cin >> word1;
    cout << endl << "Please enter the second word: ";
    cin >> word2;
    
    if (word1.length() > word2.length())
    {
        cout << word1 << " is longer, than " << word2;
    }
    else if (word2.length() > word1.length())
    {
        cout << word2 << " is longer, than " << word1;
    }
    else
    {
        cout << word2 << " has the same length as " << word1;

    }

    return 0;
}