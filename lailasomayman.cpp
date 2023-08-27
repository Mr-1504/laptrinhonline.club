#include <bits/stdc++.h>
using namespace std;
long long n, s;
void dfs(long long x, int s4, int s7){
    if ((x >= n) && (s4 == s7) && ((x < s) || (s == 0)))
        s = x;
    if (x < n * 100)
    {
        dfs(x * 10 + 4, s4 + 1, s7);
        dfs(x * 10 + 7, s4, s7 + 1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    scanf("%lld",&n);
    dfs(0, 0, 0);
    printf("%lld",s);
}