#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> *v = new vector<int>;
    v->push_back(1);
    v->push_back(2);
    v->push_back(3);
    v->push_back(4);
    v->push_back(5);
    v->at(2) = 100;

    for (int i: *v)
    {
        cout << i << endl;
    }

    for (int i = 0; i < v->size(); i++)
    {
        cout << v->at(i) << endl;
    }

    for (int i = 0; i < v->size(); i++)
    {
        cout << (*v)[i] << endl;
    }
    return 0;
}