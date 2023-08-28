#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++){
        if(a[i]==',') {
            a[i]=' ';
        }
    }
    cout<<a;
}