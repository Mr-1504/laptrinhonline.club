#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int > a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[x]++;
    }
    int max=0;
    for(auto m:a){
        int x= m.second;
        max=max<x? x:max;
    }
    cout<<max<<endl;
    for(auto m:a){
        int x=m.second;
        int y=m.first;
        if(x==max){
            cout<<y<<" ";
        }
    }
}