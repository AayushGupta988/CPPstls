#include <iostream>
#include <unordered_set>

using namespace std;

void find(unordered_set<int> s, int n)
{
    if (s.find(n) != s.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}

int main()
{
    unordered_set<int> s;
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
    s.emplace(5);
    s.emplace(5);

    for (unordered_set<int>::iterator i = s.begin(); i != s.end(); i++)
    {
        cout << *i << endl;
    }

    int n;
    cout << "Number: ";
    cin >> n;

    find(s, n);

    cout << "Count: " << s.count(n) << endl;

    cout << "Bucket count: " << s.bucket_count() << endl;
    cout << "Load Factor: " << s.load_factor() << endl;
    cout << "Max load factor: " << s.max_load_factor() << endl;

    unordered_set<int>::hasher fn = s.hash_function();
    cout << "Hash function of " << n << ": " << fn(n) << endl;

    return 0;
}