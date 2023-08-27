#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a;
    cin>>a;
    while(a.length()>1){
        int temp=0;
        for(int i=0;i<a.length();i++){
            temp+=a[i]-'0';
        }
        a=to_string(temp);
    }
    cout<<a;
}