#include <iostream>
#include <set>

using namespace std;

void find(set<int> s, int n)
{
    if (s.find(n) != s.end())
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
}

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    s.insert(9);
    s.insert(9);

    int n;
    cout << "Number: ";
    cin >> n;
    find(s, n);
    
    for (set<int>::iterator i = s.begin(); i != s.end(); i++)
        cout << *i << endl;

    for (set<int>::reverse_iterator r = s.rbegin(); r != s.rend(); r++)
        cout << *r << endl;

    s.erase(9);
    find(s, 9);

    // returns iterator to next greater value
    cout << *s.upper_bound(3) << endl;

    // returns iterator having value not less than 1
    cout << *s.lower_bound(1) << endl;
    return 0;
}