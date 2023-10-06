#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        vector<char> b, c;
        for (int i = 0; i < a.length(); i++)
        {
            if ((a[i] - '0') % 2 == 0)
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }
        int i = 0, j = 0;
        while (i < b.size()&&j<c.size())
        {
                if (b[i] < c[j])
                {
                    cout << b[i];
                    i++;
                }
                else
                {
                    cout << c[j];
                    j++;
                }
        }
        while (i<b.size())
        {
            cout<<b[i++];
        }
        while (j<c.size())
        {
            cout<<c[j++];
        }
        cout<<endl;
    }

    return 0;
}