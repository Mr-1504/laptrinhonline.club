#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    map<int, string> chuso;
    chuso[0]="";chuso[1]="mot";chuso[2]="hai";chuso[3]="ba";chuso[4]="bon";chuso[5]="nam";chuso[6]="sau";chuso[7]="bay";chuso[8]="tam";chuso[9]="chin";
    for(int i=a;i<=b;i++){
        string temp=to_string(i);
        if(temp.length()==1){
            cout<<chuso[stoi(temp)]<<endl;
        }else if(temp.length()==2){
            if(temp[0]-'0'==1) 
                if(temp[1]-'0'==5) cout<<"muoi lam"<<endl;
                else cout<<"muoi "<<chuso[temp[1]-'0']<<endl;
            else {
                if(temp[1]-'0'!=5) cout<<chuso[temp[0]-'0']<<" muoi "<<chuso[temp[1]-'0']<<endl;
                else cout<<chuso[temp[0]-'0']<<" muoi lam"<<endl;
            }
        }else if(temp.length()==3){
            cout<<chuso[temp[0]-'0']<<" tram ";
            if(temp[1]-'0'==0){
                if(temp[2]-'0'!=0) cout<<"linh "<<chuso[temp[2]-'0']<<endl;
                else cout<<endl;
            }else if(temp[1]-'0'==1) 
                if(temp[2]-'0'==5) cout<<"muoi lam"<<endl;
                else cout<<"muoi "<<chuso[temp[2]-'0']<<endl;
            else {
                if(temp[2]-'0'!=5) cout<<chuso[temp[1]-'0']<<" muoi "<<chuso[temp[2]-'0']<<endl;
                else cout<<chuso[temp[1]-'0']<<" muoi lam"<<endl;
            }
        }else if(temp.length()==4){
            cout<<chuso[temp[0]-'0']<<" nghin ";
        }
    }
}