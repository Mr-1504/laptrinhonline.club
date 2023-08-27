#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    bool b=true;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<1||x>n) {
            b=false;
            break;
        }
    }
    if(b) cout<<"YES";
    else cout<<"NO";
}