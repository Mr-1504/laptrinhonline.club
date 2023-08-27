#include <bits/stdc++.h>
using namespace std;
int cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first < b.first)
        return 1;
    else if (a.first > b.first)
        return 0;
    return a.second > b.second;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k=0;
    cin>>n;
    int arr[n];
    map<int, int> a,c,d;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
        if(!c[x]) {
            c[x]=1;
            d[x]=i;
        }
        a[x]++;
    }
    vector <pair<int, int>> b;
    for(auto it:a){
        int x=it.first;k++;
        b.push_back(make_pair(it.second,d[x]));
    }
    sort(b.begin(),b.end(),cmp);
    cout<<arr[b[k-1].second]<<" "<<arr[b[k-2].second]<<" "<<arr[b[k-3].second];
    
}