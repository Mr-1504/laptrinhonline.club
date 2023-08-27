#include <bits/stdc++.h>
using namespace std;
bool kt(int a, int b, int c) {
    return a + b > c && a + c > b && b + c > a;
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(kt(a, b, c)||kt(a,b,d)||kt(b,c,d)||kt(a,c,d)) cout<<'S';
    else cout<<'N';
}