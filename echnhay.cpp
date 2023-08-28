#include <bits/stdc++.h>
using namespace std;
int echnhay(int a[], int n){
    int m = 0;
    for (int i = 0; i < n; i++){
        if (i > m) return 0;
        m = max(m, i + a[i]);
        if (m >= n- 1) return 1;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++){
            cin >>a[j];
        }
        if (echnhay(a,n))
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
}