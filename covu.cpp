#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, char> a;
    map<char, int> c;
    int dem = 0;
    string b;
    cin >> b;
    int res = 0, r = 0, l = 0;
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == b[i + 1] && i < b.size() - 1)
            dem++;
        a[i] = b[i];
        c[b[i]]++;
        if (c[b[i]] == c[b[i - 1]] && i > 0)
        {
            if (b[i] == b[i + 1])
            {
                res = max(res, i - r);
                r = i;
                c[b[i]] = 1;
                c[b[i - 1]] = 0;
                c[b[i - 2]] = 0;
            }
            if (b[i] == b[i - 1] && i > 0)
            {
                res = max(res, i - r);
                r = i;
                c[b[i]] = 1;
                c[b[i - 1]] = 0;
                c[b[i - 2]] = 0;
            }
            if (b[i + 1] == b[i + 2] && i < b.size() - 1)
            {
                res = max(res, i - r + 1);
                r = i;
                c[b[i]] = 1;
                c[b[i - 1]] = 0;
                c[b[i - 2]] = 0;
            }
            if (i == b.size() - 2)
            {
                res = max(res, i - r);
                break;
            }
        }
        if (b[i] == b[i - 1] && i > 0)
        {
            res = max(res, i - r);
            r = i;
            c[b[i]] = 1;
            c[b[i - 1]] = 0;
            c[b[i - 2]] = 0;
        }
        if (i == b.size() - 1)
        {
            res = max(res, i - r);
        }
    }
    if (res % 2 == 1)
        res++;
    if (dem == b.size() - 1)
        res = 0;
    cout << res;
}