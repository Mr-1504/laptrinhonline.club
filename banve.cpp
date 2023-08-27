#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if (a == 25)
            sum1 += a;
        else{
            sum2 += (a - 25);
        }
    }
    if (sum1 >= sum2)
        cout << "YES";
    else
        cout << "NO";
}