#include<bits/stdc++.h>
using namespace std;
bool compare(pair<long long, long long> &p1, pair<long long,long long> &p2){
    if (p1.first != p2.first){
        return p1.first < p2.first;
    }else{
        if (p1.second != p2.second){
            return p1.second < p2.second;
        }else{
            return false;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    map<long long,long long> a;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        a[x]++;
    }
    vector<pair<long long,long long>> b;
    for (auto m:a)
    {
        b.push_back(make_pair(m.second, m.first));
    }
    sort(b.begin(), b.end(), compare);
    for(int i=0;i<b.size();i++){
        cout<<b[i].second<<" ";
    }
}