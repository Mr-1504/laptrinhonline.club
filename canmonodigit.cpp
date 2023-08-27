#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    unsigned int  l=n.length();
    unsigned int lon=0,dem=0;
    bool x=false;
    for(unsigned int i=0;i<l-1;i++){
        if(n[i]>n[lon]){
            x=true;
            break;}
        if(n[i]<n[lon]){
            break;
            
        }
        if(n[i]==n[i+1]){
            dem++;
        }
    }
    if(dem!=l-1){
    if(x){
        for(unsigned int i=0;i<l;i++){
            cout<<n[0]-'0'+1;
        }cout<<endl;
        for(unsigned int i=0;i<l;i++){
            cout<<n[0];
        }
    }
    else{
        for(unsigned int i=0;i<l;i++){
            cout<<n[0];
        }cout<<endl;
        for(unsigned int i=0;i<l;i++){
            cout<<n[0]-'0'-1;
        }
    }}else{
        cout<<n<<endl<<n;
    }

}