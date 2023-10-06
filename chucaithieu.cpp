#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string n;
    cin >> n;
    unordered_map<char, int> a;
    for (int i = 0; i < n.length(); i++)
        a[n[i]]++;
    for (char i = 'a'; i <= 'z'; i++)
        if (!a[i])
            cout << i;
    return 0;
}