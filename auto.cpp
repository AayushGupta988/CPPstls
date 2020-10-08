#include<iostream>
using namespace std;

int main()
{
    // automatically determines type of variable from initialization
    auto x = 4;
    auto y = 5.4;
    auto ptr = &y;
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(ptr).name() << endl;
    return 0;
}