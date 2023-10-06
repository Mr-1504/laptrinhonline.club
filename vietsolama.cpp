#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i = 0; i < n / 10; i++)
        cout << "X";
    for (int i = 0; i < (n % 10) / 5; i++)
        cout << "V";
    for (int i = 0; i < ((n % 10) % 5); i++)
        cout << "I";
    return 0;
}