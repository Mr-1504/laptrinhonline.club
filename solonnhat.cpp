#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int max_val = INT_MIN;
    for(int i=0; i<3; i++){
        int x;
        cin >> x;
        max_val = max(max_val, x);
    }
    cout << "Max = " << max_val;
    return 0;
}
