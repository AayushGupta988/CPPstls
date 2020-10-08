#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void func1(vector<int> &v);
void func2(vector<int> &v);
void func3(vector<int> &v);
void func4(vector<int> &v);
void func5(vector<int> &v);
void func6(vector<int> &v);
void func7();
void func8(vector<int> &v);
void func9(vector<int> &v);

int main()
{
    vector<int> v {4, 2, 1, 6, 10, 14, 12};

    // all_of()
    // input-> [start, end), condition
    // returns true if all of them follow the condition
    func1(v);

    // any_of()
    // input-> [start, end), condition
    // returns true if any of them follow the condition
    func2(v);

    // none_of()
    // input-> [start, end), condition
    // returns true if none of them follow the condition
    func3(v);

    // for_each()
    // input-> [start, end), function name
    // apply that function to every element
    func4(v);

    // find()
    // input-> [start, end), key
    // return: iterator to key if found
    // else return: end iterator (* iterator = garbage) if not found
    func5(v);

    // find_if()
    // input-> [start, end), func name(UnaryPredicate)
    // return: iterator to key if it satisfies func
    // else return: end iterator (* iterator = garbage) if not found
    func6(v);

    //minmax({vector})
    func7();

    vector<int> v2 {1, 2, 2, -1, 4, 4, 3, 4, 6, 7};
    cout << "Count: " <<  count(v2.begin(), v2.end(), 4) << endl;


    // searching subsequence
    vector<int> v3 {1, 2, 3, 4, 5};
    vector<int> v4 {3, 4};
    cout << "Search: " << *search(v3.begin(), v3.end(), v4.begin(), v4.end()) << endl;


    string s1 = "Aayush";
    string s2 = "yuh";
    cout << "Search substr: " << *search(s1.begin(), s1.end(), s2.begin(), s2.end());


    
    return 0;
}

void func1(vector<int> &v)
{
    if (all_of(v.begin(), v.end(), [](int i) { return i % 2 == 0; })) // AND
    {
        cout << "All are even" << endl;
    }
    else
    {
        cout << "All are not even" << endl;
    }
}

void func2(vector<int> &v)
{
    if (any_of(v.begin(), v.end(), [](int i) { return i < 0; })) // OR
    {
        cout << "Atleast one number is negative" << endl;
    }
    else
    {
        cout << "All are positive" << endl;
    }
}


void func3(vector<int> &v)
{
    if (none_of(v.begin(), v.end(), [](int i){return i % 2;})) // none should be odd
    {
        cout << "None is odd" << endl;
    }
    else
    {
        cout << "some are odd" << endl;
    }
}


void myfunc(int i)
{
    cout << i * 10 << endl;
}
void func4(vector<int> &v)
{
    for_each(v.begin(), v.end(), myfunc);
}


void func5(vector<int> &v)
{
    vector<int>::iterator i = find(v.begin(), v.end(), 4);
    cout << *i << endl;
}


bool isOdd(int i)
{
    return i % 2 == 1;
}
void func6(vector<int> &v)
{
    vector<int>:: iterator i = find_if(v.begin(), v.end(), isOdd);
    cout << *i << endl;
}


void func7()
{
    pair<int, int> result = minmax({1, 2, 4, 2, 10});
    cout << result.first << endl;
    cout << result.second << endl;
}

void func8(vector<int> &v){}
void func9(vector<int> &v){}
void func10(vector<int> &v){}
void func11(vector<int> &v){}