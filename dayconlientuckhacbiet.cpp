#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    int a[n], c[n]={0}, max=1;
    map<int, int> b;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    c[0] = 1;
    b[a[0]] = 1;
    for(int i = 1; i < n; i++) {
        if(b[a[i]] == 0) {
            c[i] = c[i-1] + 1;
            max=max>c[i]?max:c[i];
        } else {
            c[b[a[i]]]=1;
            i=b[a[i]];
            b.clear();
        }
        b[a[i]] = i + 1;
        if(max>=n-max) break;
    }
    // sort(c, c + n);
    cout << max;
    return 0;
}
