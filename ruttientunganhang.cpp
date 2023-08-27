#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n;
    cin >> m >> n;
    long long a[n],b[m+1]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b[0]=1;
    for(int i=0;i<n;i++){
        for(int j=a[i];j<=m;j++){
            b[j]=b[j]+b[j-a[i]];
        }
    }
    cout << b[m];
}