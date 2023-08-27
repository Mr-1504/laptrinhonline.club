#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<int,int>c;
    int n,l;
    cin >> n>>l;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        c[temp]++;
    }
    int temp=0,s=0;
    auto it=c.end();it--;
    int res=it->first;
    while (res!=0){
        if(res==it->first){
            temp+=it->second;
            it--;
        }
        res--;
        s+=temp;
        if(s>=l) break;
    }
    cout<<res;
}