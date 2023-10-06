#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    char a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i] = i + 'a';
    }
    string b;
    cin >> b;
    int t;
    cin >> t;
    while (t--)
    {
        char x;
        cin >> x;
        if (x == 'R')
        {
            char y, z;
            cin >> y >> z;
            for (int i = 0; i < 26; i++)
            {
                if (a[i] == y)
                {
                    a[i] = z;
                }
            }
        }
        if (x == 'D')
        {
            char y;
            cin >> y;
            for(int i=0;i<26;i++){
                if(a[i]==y) a[i]='0';
            }
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (a[b[i]-'a'] != '0')
            cout << a[b[i]-'a'];
    }

    return 0;
}