#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> b(7);
    map<int, int> c;
    for (int i = 0; i < 7; ++i)
    {
        cin >> b[i];
    }
    int temp = -1;
    for (int i = 2; i < 7; i++)
    {
        if (b[0] + b[1] + b[i] == b[6])
        {
            temp = b[i];
            c[temp]=1;
            break;
        }
    }
    if (temp != -1)
    {
        c[b[0] + b[1]]++;
        c[temp + b[1]]++;
        c[b[0] + temp]++;
        c[b[0] + b[1] + temp]++;
        for (int i = 2; i < 7; i++)
        {
            if (!c[b[i]])
            {
                cout << -1;
                return 0;
            }
        }
        cout << b[0] << " " << b[1] << " " << temp;
    }
    else
        cout << -1;
    return 0;
}
