#include <bits/stdc++.h>
using namespace std;
int n;
void backtracking(int m, int d, string a)
{
    if (m == 0 && d == 0)
    {
            cout<<a<<"\n";
    }
    if (m != 0)
        backtracking(m - 1, d, a + "(");
    if (d !=0 &&m < d)
        backtracking(m, d - 1, a + ")");
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    scanf("%d", &n);
    backtracking(n, n, "");
}