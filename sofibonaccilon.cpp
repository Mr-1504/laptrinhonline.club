#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;
string add(string f1, string f2)
{
    string s = "";
    if(f1.size() > f2.size()){
        while (f1.size()!=f2.size())
        {
            f2= '0'+f2;
        }
    }else{
         while (f1.size()!=f2.size())
        {
            f1= '0'+f1;
        }
    }
    int i = f1.size() - 1;
    int j = 0;

    while (i >= 0)
    {
        char x;
        int d1 = (i < f1.size()) ? f1[i] - '0' : 0;
        int d2 = (i < f2.size()) ? f2[i] - '0' : 0;
        int sum = d1 + d2 + j;
        if (sum > 9)
        {
            x = (sum - 10) + '0';
            j = 1;
        }
        else
        {
            x = sum + '0';
            j = 0;
        }
        s = x + s;
        i--;
    }
    if (j)
    {
        s = '1' + s;
    }
    return s;
}

void solve()
{
    int n;
    string f1 = "1";
    string f2 = "1";
    string f = "1";
    cin >> n;
    for(int i = 3; i <=n; i++){
        f1 = f2;
        f2 = f;
        f = add(f1,f2);
    }
    cout << f;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}