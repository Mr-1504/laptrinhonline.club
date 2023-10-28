#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, i=0, a1 = 0, _a1 = 0, d = 0;
    while (cin >> n && i!= 9)
    {
        a[i++] = n;
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