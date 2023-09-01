#include<bits/stdc++.h>
using namespace std;
bool hoanvixau( string s, string b){
    map<char, int>a;
    for(char c:s){
        a[c]++;
    }
    for(char c:b){
        if(c!='*') a[c]--;
    }
    for(auto it:a) {
        if(it.second<0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string a,b;
    cin>>a>>b;
    if(hoanvixau(a,b)) cout<<"yes";
    else cout<<"no";
    return 0;
}