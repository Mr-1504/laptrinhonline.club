#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int ,int > a;
    map<int ,int > b;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[x+y]++;
        b[x-y]++;
    }
    int res=0;
    for(auto ab:a){
        int val=ab.second;
        res+=val*(val-1)/2;
    }
    for(auto cb:b){
        int val=cb.second;
        res+=val*(val-1)/2;
    }
    cout<<res;
}
