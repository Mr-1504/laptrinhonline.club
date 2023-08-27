#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a;
    cin >> a;
    int n = a.length();
    int res = 0;
    vector<char> result;
    for (int i = 0; i < n / 2; i++) {
        int j = n - 1 - i;
        if (a[i] != a[j]) {
            if (a[i] == a[j - 1]) {
                res++;
                result.push_back(a[j]);
            } else if (a[i + 1] == a[j]) {
                res++;
                result.push_back(a[i]);
            } else {
                res += 2;
                result.push_back(a[j]);
                result.push_back(a[i]);
            }
        } else {
            result.push_back(a[i]);
        }
    }
    cout << res--;
}
