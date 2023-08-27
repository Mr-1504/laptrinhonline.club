#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    string c,d;
    cin>>c>>a;
    cin>>d>>b;
    if(a>b){
        cout<<c<<" cao hon "<<d;
    }else if(a<b){
        cout<<d<<" cao hon "<<c;
    }else{
        cout<<c<<" cao bang "<<d;
    }
}