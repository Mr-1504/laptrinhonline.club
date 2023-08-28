#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a, b="";
    cin >> a;
    int i = 0;
    for(char c:a){
        if(c=='0'||c=='1'){
            b+=c;
        }else if(!b.empty()) b.pop_back();
    }
    cout << b;
    return 0;
}
