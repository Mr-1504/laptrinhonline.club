#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    map<int, int>a;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    cout<<a.size();
    return 0;
}