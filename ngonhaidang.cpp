#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    if((a1>=6&&a1<18)){
        cout<<"OFF";
    }else{
        int cnt=(a1-18)*3600+a2*60+a3, t1=10, t2= 15;
        int chuki= cnt/(t1+t2);
        cnt-=chuki*25;
        if(cnt<=t1){
            cout<<"ON";
        }else cout<<"OFF";
    }
}