#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    unsigned long long cnt, temp;
    cin>>t;
    for(int i=0;i<t;i++){
       cin>>temp;
       cnt=(temp-1)*temp/2+1;
       cout<<cnt<<endl;
    }
    return 0;
}