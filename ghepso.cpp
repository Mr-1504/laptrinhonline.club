#include<bits/stdc++.h>
using namespace std;
string x,y;
long long mi=LLONG_MAX,ma=LLONG_MIN;
void backtracking(string temp, int x1, int y1){
    if(x1==x.length()&& y1 ==y.length()){
        long long c=stoll(temp);
        mi=min(mi,c);
        ma=max(ma,c);
        return;
    }
    if(x1<x.length())
        backtracking(temp+x[x1],x1+1,y1);
    if(y1<y.length())
        backtracking(temp+y[y1],x1,y1+1);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin>>x>>y;
    backtracking("",0,0);
    cout<<mi<<endl<<ma;
}