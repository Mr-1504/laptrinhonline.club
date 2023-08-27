#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    scanf("%d",&n);
    int a[n],l[n]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                l[i]=l[i]<l[j]+1?l[j]+1:l[i];
            }
        }
    }
    sort(l,l+n);
    printf("%d",l[n-1]+1);
}