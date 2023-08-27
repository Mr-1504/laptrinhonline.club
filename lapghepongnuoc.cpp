#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    priority_queue<long long, vector<long long>, greater<long long>> a;
    long long b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        a.push(b[i]);
    }
    long long count = 0, temp = 0, c = 0;
    ;
    while (a.size() != 1)
    {

        int x = a.top();
        a.pop();
        temp += x;
        c++;
        if (c == k)
        {
            count += temp;
            a.push(temp);
            temp = 0;
            c = 0;
        }
    }
    // if (temp != 0)
    // {
    //     cout << count + temp;
    // }
    // else
    // {
    cout << count + temp + a.top();
    // }
}
// 8 13
// 18