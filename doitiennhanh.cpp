#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a[] = {1000, 2000, 5000, 10000, 20000, 50000, 100000, 200000, 500000};
    int n, res = 0;
    cin >> n;
    for(int i = 8; i >= 0; i--){
        res += n/a[i];
        n %= a[i];
    }
    if(!n) 
        cout << res;
    else 
        cout << -1;
}