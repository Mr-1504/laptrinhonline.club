#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    map<int, int> a;
    for(int i=0;i<9;i++){
        int x;
        cin>>x;
        if(a[x]==0&&x<=9&&x>=1) a[x]++;
        else {
            cout<<"INVALID";
            return 0;
        }
    }
    cout<<"VALID";
    return 0;
}