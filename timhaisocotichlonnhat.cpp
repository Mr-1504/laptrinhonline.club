#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    long long max=a[0]*a[1]>a[n-1]*a[n-2]?a[0]*a[1]:a[n-1]*a[n-2];
    printf("%lld",max);
}