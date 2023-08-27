#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int ,int> a;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++){
        a[b[i]]++;
    }
    // for (auto minh:a)
    // {
    //    cout<<minh.first<<" "<<minh.second<<endl;
    // }
    for (auto it = a.rbegin(); it != a.rend(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

}