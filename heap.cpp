#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool func(int a, int b)
{
    // for min heap use <
    return a < b;
}

int main()
{
    vector<int> v {4, 2, 5, 1, 7, 4, 6, 3, 9, 0};

    // sort v as per max heap
    make_heap(v.begin(), v.end(), func);
    // max will be at the front
    cout << v.front() << endl;


    // sends the max (front element) to last position
    pop_heap (v.begin(), v.end(), func);
    // delete that number
    v.pop_back();
    // show current greatest number
    cout << v.front() << endl;


    // add 100 to v
    v.push_back(100);
    // sort in heap
    push_heap (v.begin(), v.end(), func);
    cout << v.front() << endl;

    for (int i: v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}