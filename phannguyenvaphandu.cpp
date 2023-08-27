#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    long long res=0;
    for(int i=2;i<=y;i++){
        for(int j=1;;j++){
            if(i*j+j<=x&&i!=j) res++;
            else break;
        }
    }
    cout<<res;
}