#include<bits/stdc++.h>
using namespace std;
//#define minh main
int n,x[10];
int test[10]={0};
void display(){
    for(int i=1;i<=n;i++){
        cout<<x[i];
    }
    cout<<"\n";
}
void backtracking(int k){
    for(int i=1;i<=n;i++){
        if(test[i]==0){
            test[i]=1;
            x[k]=i;
            if(k==n){
                display();
            }else{
                backtracking(k+1);
            }
            test[i]=0;
        }
    }
}
//minh(){
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    backtracking(1);
    return 0;
}