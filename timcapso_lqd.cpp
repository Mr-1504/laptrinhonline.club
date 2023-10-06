#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = n-1;
    while ( i<j)
    {
        if (a[i] + a[j] == x&&a[i]!=a[j])
        {
            cout << i +1 << " " << j+1;
            return 0;
        }
        if(a[i]+a[j]>x) j--;
        else i++;
    }
    cout<<"No solution";
    return 0;
}