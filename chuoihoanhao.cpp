#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a;
    cin>>a;
    map<char, int> b;
    for(int i=0;i<a.length();i++){
        b[a[i]]++;
    }
    bool c=true;
    for( auto it:b){
        if(it.second%2!=0){
            c=false;
            break;
        }
    }
    if(c){
        cout<<"Yes";
    }else cout<<"No";
    return 0;
}
