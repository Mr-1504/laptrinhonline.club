#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long n, m, res=0, temp=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(temp>=m){
            res+=m;
            temp=x;
        }else if(temp>0&&temp<m){
            res+=temp;
            if(x>=m-temp){
                res+=m-temp;
                temp=x-(m-temp);
            }else{
                res+=x;
                temp=0;
            }
        }else{
            if(x>=m){
                res+=m;
                temp=x-m;
            }else{
                res+=x;
                temp=0;
            }
        }
       // cout<<res<<" "<<temp<<endl;
        }
    if(temp!=0) {
        if(temp>m) res+=m ;
        else res+= temp;
    }
    cout<<res;
    
}