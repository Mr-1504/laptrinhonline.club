#include <bits/stdc++.h>
using namespace std;
long long mu(long long n)
{
    long long i = 0,s=1;
    while (n % s == 0)
    {
        i++;
        s=pow(2,i);
    }
    return i-1;
}
long long xuly(long long n){
    do{
        if(n%2==0){
            n=n/pow(2,mu(n))+mu(n);
        }else{
            n=n/2;
        }
    }while(n>=10);
    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long m;cin>>m;
    for(int i=0;i<m;i++){
    long long n;cin>>n;
    if(xuly(n)%2==0){
        cout<<"y"<<endl;
    }else{
        cout<<"n"<<endl;
    }
    }
}