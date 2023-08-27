#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<10000;i++){
        if(i%n==2)
        cout<<i<<endl;
    }
}