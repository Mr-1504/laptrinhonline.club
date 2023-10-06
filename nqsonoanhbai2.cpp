#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    deque<int> b;
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n-1)
            b.push_back(a[i]);
        else
        {
            int x = b.front();
            b.pop_front();
            b.push_back(a[i]);
            b.push_back(x);
        }
    }
    while (!b.empty())
    {
        int x = b.back();
        cout << x << " ";
        b.pop_back();
    }
    return 0;
}