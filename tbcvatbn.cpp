#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,demam=0, am=0,duong=1,demduong=0;
    cin>>n;
    for(int i=0;i<n;i++){
        double x;
        cin>>x;
        if(x>0) {
            duong*=x;
            demduong++;
        }else if(x<0){
            am+=x;
            demam++;
        }
    }
    if(demam==0)
    cout<<"khong co so am"<<endl;
    else{
        double b = am/demam;
        cout<<b<<endl;
    }
    if(demduong==0){
        cout<<"khong co so duong";
    }else{
        double b=pow(duong,1.0/demduong);
        cout<<b;
    }
}