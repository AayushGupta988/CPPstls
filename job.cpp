#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compareFinish(pair<int, int> job1, pair<int, int> job2)
{
    return (job1.second < job2.second);
}

int main()
{
    vector<pair<int, int>> jobs;

    jobs.push_back({1, 3});
    jobs.push_back({2, 5});
    jobs.push_back({3, 4});
    jobs.push_back({4, 7});
    jobs.push_back({7, 10});
    jobs.push_back({8, 9});
    jobs.push_back({9, 11});
    jobs.push_back({9, 13});
    jobs.push_back({11, 12});
    jobs.push_back({12, 14});

    sort(jobs.begin(), jobs.end(), compareFinish);

    // for (int i = 0; i < jobs.size(); i++)
    // {
    //     cout << "[" << jobs[i].first << ", " << jobs[i].second << "]" << endl;
    // }

    vector<pair<int, int>> executed;
    executed.push_back(jobs[0]);
    for (int i = 1; i < jobs.size(); i++)
    {
        if (jobs[i].first >= executed.back().second)
            executed.push_back(jobs[i]);
    }

    for (auto i: executed)
    {
        cout << "[" << i.first << ", " << i.second << "]" << endl;
    }
    return 0;
}