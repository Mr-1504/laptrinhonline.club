#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << -1;
        return 0;
    }
    if(a>b) swap(a,b);
    if(c<b) swap(c,b);
    if(a>b) swap(a,b);
    int temp=a*a+b*b;
    int sqr_c=sqrt(temp);
    int d1=-1;
    if(sqr_c*sqr_c==temp) d1 = abs(c-sqr_c);
    temp=abs(c*c-b*b);
    int sqr_a=sqrt(temp);
    int d2=-1;
    if(sqr_a*sqr_a==temp) d2=abs(temp-a);
    temp=abs(c*c-a*a);
    int sqr_b=sqrt(temp);
    int d3=-1;
    if(sqr_b*sqr_b==temp) d3=abs(temp-b);
    if(d1==-1&&d2==-1&&d3==-1) {
        cout<<-1;
        return 0;
    }
    int res=min(d1,min(d2,d3));
    cout<<res;
    return 0;
}