#include<iostream>
using namespace std;
int main()
{
    int answer = 7;
    int guess;
    bool keepgoing = true;

    while (keepgoing)
    {
        cout << "Enter a guess: ";
        cin >> guess;
        if (guess < answer)
        {
            cout << endl << "Your guess: " << guess << " is less than the right answer";

        }
        else if (guess > answer)
        {
            cout << endl << "Your guess: " << guess << " is greater than the right answer";


        }
        else if (guess == answer)
        {
            cout << endl << "Your guess: " << guess << " is correct!";
            return 0;

        }

        cout << endl << "New guess? 0 for no: ";
        cin >> guess;
        keepgoing = guess != 0;
    }
    return 0;
}