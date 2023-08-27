#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int  n;
    cin>>n;
    stack<pair<long long, long long>> a;
    a.push({LLONG_MAX, 0});
    long long res=0, i=0;
    while (i<n)
    {
        int x;
        cin >>x;
        while (a.top().first<x)
        {
            res+=a.top().second;
            a.pop();
        }
        if(a.top().first==x){
            a.push({x, a.top().second+1});
            res++;
        }else{
            if(a.size()>1) res++;
            a.push({x,1});
        }
        i++;
    }
    cout<<res;
}