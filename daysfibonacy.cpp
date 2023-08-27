#include <bits/stdc++.h>
using namespace std;
string fibornacy(int n){
    string a = "0", b = "1";
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fibornacy(n - 1) + fibornacy(n - 2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for (int k = 0; k < 2; k++){
        int n, res = 0;
        cin >> n;
        string a = fibornacy(n);
        string b;
        cin >> b;
        for (int i = 0; i < a.length() - b.length() + 1; i++){
            bool test = true;
            for (int j = 0; j < b.length(); j++){
                if (a[i + j] != b[j]){
                    test = false;
                    break;
                }
            }
            if (test)
                res++;
        }
        cout << "Case " << k + 1 << ": " << res << endl;
    }
}