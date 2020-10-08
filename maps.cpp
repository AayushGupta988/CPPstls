#include <iostream>
#include <string>
#include <map>

using namespace std;

// template<class t1, class t2>
// void print(map<t1, t2> &map1)
// {
//     map1<t1, t2>::iterator i;
//     for (i = map1.begin(); i != map1.end(); i++)
//     {
//         cout << "Key: " << i->first << " Value: " << i->second << endl;
//     }
// }

int main()
{
    map<int, string> map1;
    map1.insert(pair<int, string>(1, "Mobile"));
    map1.insert(pair<int, string>(2, "TV"));
    map1.insert(pair<int, string>(3, "Fridge"));
    map1.insert(pair<int, string>(4, "Oven"));
    map1.insert(pair<int, string>(5, "Light"));

    map<int, string>::iterator i;
    for (i = map1.begin(); i != map1.end(); i++)
    {
        cout << "Key: " << i->first << " Value: " << i->second << endl;
    }

    cout << map1.find(3)->second << endl;

    cout << map1.upper_bound(2)->second << endl;
    cout << map1.lower_bound(2)->second << endl;

    map<char, int> map2;
    map2['a'] += 1;
    map2['b'] += 2;
    map2['c'] += 3;
    map2['d'] += 4;
    map2['e'] += 5;

    map<char, int>::iterator i2;
    for (i2 = map2.begin(); i2 != map2.end(); i2++)
    {
        cout << "Key: " << i2->first << " Value: " << i2->second << endl;
    }
    cout << map2['c'] << endl;
    cout << map2['f'] << endl;

    return 0;
}