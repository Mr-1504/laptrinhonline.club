#include<bits/stdc++.h>
using namespace std;
bool sq(const string& s) {
    int n = s.length();
    if (n % 2 == 1) {
        return false;  
    }
    int t = n / 2;
    string l = s.substr(0, t);
    string r = s.substr(t);
    
    if (l == r) {
        return true;
    } else {
        return false;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;  
    while (t--) {
        string s;
        cin >> s; 
        if (sq(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
