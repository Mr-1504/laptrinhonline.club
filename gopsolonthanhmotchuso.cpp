#include <bits/stdc++.h>
using namespace std;
int test(string n){
    while (n.length()>1)
    {
        int x=0;
        for(int i=0;i<n.length();i++){
            x+=n[i]-'0';
        }
        n=to_string(x);
    }
    int res=stoi(n);
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    while(1){
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0){
            break;
        }else{
            string x=to_string(n);
            string y=to_string(m);
            if(test(x)>test(y))
                cout<<1<<endl;
            else if(test(x)<test(y))
                cout<<2<<endl;
            else cout<<0<<endl;
        }
    }
}
