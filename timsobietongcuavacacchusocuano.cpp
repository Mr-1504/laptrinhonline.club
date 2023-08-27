#include <bits/stdc++.h> 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,k=0;
    cin >> n;
    for (int i=n-9*to_string(n).size();i<=n;i++){
        int temp=i;
        int s=0;
        while(temp>0) {
            s+=temp%10;
            temp/=10;
        }
        if(i+s==n){
            cout<<i<<" ";
            k++;
        }
    }
    if(!k)cout<<-1;
}
