#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int ,int > a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[x]++;
    }
    int dem=0;
    for(auto minh:a){
        int x=minh.second;
        int y=minh.first;
        if(x>n/2) {
            cout<<y<<" ";
            dem++;
            }
    }
    if(dem==0){
        cout<<"khong co phan tu ap dao";
    }
}