#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define minh main
ll xuly(ll n){
    do{
        if (n % 2 == 0){
            ll i = 0;
            while (n % 2 == 0){
                n /= 2;
                i++;
            }
            n+=i;
        }
        else
            n = n / 2;
    } while (n >= 10);
    return n;
}
minh(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++){
        ll n;
        cin >> n;
        if (xuly(n) % 2 == 0)
            cout << "y" << endl;
        else
            cout << "n" << endl;
    }
    return 0;
}