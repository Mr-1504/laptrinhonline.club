#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.first != p2.first)
    {
        return p1.first < p2.first;
    }
    else
    {
        if (p1.second != p2.second)
        {
            return p1.second > p2.second;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> b;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        b.push_back(make_pair(x, y));
    }
    sort(b.begin(), b.end(), compare);
    int i = 0, time = 1, tien = 0;
    //1 2 2 3 3 4
    //3 4 2 7 5 1
   for(int i=0;i<n;i++)
    {
        if (b[i].first >= time)
        {
            if (b[i + 1].second >= b[i].second && b[i + 1].first == time+1 )
                i++;
            tien += b[i].second;
            time++;
        }
    }
    cout << tien;
}