#include<bits/stdc++.h>
using namespace std;
int music(int a[]){
    int t;
    if(a[0]>a[7]) t=1;
    else t=2;
    for(int i=1;i<8;i++){
        if(t==2) if(a[i]<=a[i-1]) return 0;
        if(t==1) if(a[i]>=a[i-1]) return 0;
    }
    return t;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a[8];
    for(int i=0;i<8;i++){
        cin>>a[i];
    }
   int res= music(a);
   if(res==1) cout<<"GIAM";
   else if(res==2) cout<<"TANG";
   else cout<<"KHONGBIET";
}