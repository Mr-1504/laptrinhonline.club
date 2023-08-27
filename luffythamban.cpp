#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i){
        int x;
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int m = 0;
    int cnt = n / 2;
    for (int i = 0; i < n; ++i){
        m += abs(a[i] - a[cnt]);
    }
    printf("%d", m);
}
