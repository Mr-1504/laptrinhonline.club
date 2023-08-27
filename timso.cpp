#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k=0,i=2;
    cin>>n;
    string a="";
    while(n>0){
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                k=1;
                break;
            }
        }
        if(k==0){
            a+=to_string(i);
            n--;
        }else{
            k=0;
        }
        i++;
    }
    cout<<a;
}