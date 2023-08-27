#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    scanf("%d", &n);
    map<int, int> test;
    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        test[x]++;
    }
    int res = 0;
    res = test[4] + test[3] + test[2] / 2;
    test[1] -= test[3];
    if (test[2] % 2 != 0){
        res++;
        test[1] -= 2;
    }
    if (test[1] > 0){
        if(test[1]%4!=0){
            res+=(test[1]/4)+1;
        }else res+=test[1]/4;
    }
    printf("%d", res);
}