#include <bits/stdc++.h>
using namespace std;
int cmp(const pair<int, string> &a, pair<int, string> &b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        map<string, int> a;
        for (int j = 0; j < n; j++)
        {
            string temp;
            cin >> temp;
            a[temp]++;
        }
        vector<pair<int, string>> a_temp;
        for (auto it : a)
        {
            a_temp.push_back({it.second, it.first});
        }
        sort(a_temp.begin(), a_temp.end(), cmp);
        cin >> n;
        int k = a_temp.size() - 1;
        for (int j = 0; j < n; j++)
        {
            cout << a_temp[k].second << " ";
            k--;
        }
        cout << endl;
    }
    return 0;
}