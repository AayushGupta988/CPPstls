#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void show(priority_queue<int> q)
{
    while(!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
}

int main()
{
    priority_queue<int> q;
    q.emplace(2);
    q.emplace(20);
    q.emplace(33);
    q.emplace(1);
    q.emplace(7);
    q.emplace(10);

    show(q);
    cout << "Size: " << q.size() << endl;
    return 0;
}