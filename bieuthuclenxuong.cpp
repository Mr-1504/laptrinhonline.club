    #include<iostream>
    #include<cmath>
    using namespace std;
    int main(){
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        int n;cin>>n;
        if(n%2==0){
            cout<<-(n/2);
        }else{
        cout<<(n+1)/2;
    }}