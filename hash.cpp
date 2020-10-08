#include <iostream>
#include <functional>
#include <string>

using namespace std;

int main()
{
    string s1 = "Aayush";
    string s2 = "aayush";

    hash<string> ptr1;

    if (ptr1(s1) == ptr1(s2))
    {
        cout << "Match" << endl;
    }
    else
    {
        cout << "Mismatch" << endl;
    }
    
    return 0;
}