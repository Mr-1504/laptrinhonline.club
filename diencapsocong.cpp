#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> a;
    int n, m = INT_MAX, cnt = 0;
    while (cin >> n)
    {
        a.push_back(n);
        if (cnt > 0)
            m = min(m, a[cnt] - a[cnt - 1]);
        cout << m << " ";
        cnt++;
    }
    cout << endl;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
            a[i] = a[i - 1] + m;
        cout << a[i] << " ";
    }
    return 0;
}