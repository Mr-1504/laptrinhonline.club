#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        int x;
        cin >> x;
        for (int j = 1; j < a.length(); j++) {
            string temp1 = a.substr(0, j);
            string temp2 = a.substr(j);
            int n1 = stoi(temp1);
            int n2 = stoi(temp2);
            if (n1 * n2 == x) {
                cout << n1 << " " << n2 << endl;
                break;
            }
        }
    }
    return 0;
}
