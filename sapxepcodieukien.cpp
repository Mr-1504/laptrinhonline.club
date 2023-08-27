#include<bits/stdc++.h>
using namespace std;
int cmp(const void*a, const void*b){
    int x=*(int*)a;
    int y=*(int*)b;
    if (x%3 != y%3) {
        return x%3 - y%3;
    } else {
        return x > y;
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    qsort(a,n,sizeof(int),cmp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}