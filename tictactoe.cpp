#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int x,y;
    cin>>x>>y;
    if((x==1||x==3||x==7||x==9||x!=5||y==8)&&y!=5&&x!=2&&x!=8&&x!=6){
       cout<<"X";
    } else{
        cout<<"D";}
}