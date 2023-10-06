#include<bits/stdc++.h>
using namespace std;
long long de_quy(long long n){
    if(n==1) return 1;
    else {
        if(n%2==0){
            return 2*de_quy(n/2)-1;
        }else return 2*de_quy((n-1)/2)+1;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    long long n;
    cin>>n;
    cout<<de_quy(n);
}