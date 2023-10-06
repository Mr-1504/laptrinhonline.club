#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, temp = 0, cnt = 0;
    cin >> n >> k;
    priority_queue<int> b;
    map<int, int> a;
    for (int i = 0; i < k - 1; i++)
    {
        int x;
        cin >> x;
        a[x] = i + 1;
        b.push(x);
    }
    cout << b.top() << " ";
    for (int i = k - 1; i < n; i++)
    {
        int x;
        cin >> x;
        b.push(x);
        while (!b.empty() && a[b.top()] <= i +1- k)
        {
            b.pop();
        }
        cout << b.top() << " ";
    }
    return 0;
}