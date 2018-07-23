#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vi;
    for (int i = 0; i < 10; i++)
    {
        vi.push_back(i);
    }

    for (auto item:vi)
    {
        cout << item << " ";
    }
    cout << endl;

    vector<string> vs;

    cout << "enter three words ";

    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    }
     
    string s = "Andras";
    //vs.push_back(s);

    for (auto item : vs)
    {
        cout << item << " ";
    }
    cout << endl;

    cout << "int vector vi has " << vi.size() << " element.";
    vi[5] = 3;
    vi[6] = -1;
    vi[1] = 99;

    for (auto item : vi)
    {
        cout << item << " ";
    }
    cout << endl;

    for (unsigned int i = 0; i < vi.size(); i++)
    {
        cout << vi[i] << " ";
    }
    cout << endl;

    for (auto i = begin(vi); i != end(vi); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    sort(begin(vs), end(vs));
    for (auto item : vs)
    {
        cout << item << " ";
    }
    cout << endl;

    int threes = count(begin(vi), end(vi), 3);
    cout << "vector of ints has " << threes << " element of 3" << endl;

    int tees = count(begin(vs[0]), end(vs[0]), 't');
    cout << "first world has " << threes << " letter of t's" << endl;

    return 0;
}