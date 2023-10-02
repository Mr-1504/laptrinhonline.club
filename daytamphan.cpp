#include <bits/stdc++.h>
using namespace std;
int n, a[1000], res = 0;
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void backtracking(int i)
{
    for (int j = 0; j <= 2; j++)
    {
        if (j == 0 && i == 1)
        {
            a[i] = j;
        }else  if (j != a[i - 1] && (j + a[i - 1]) % 3 != 0)
            a[i] = j;
        else
            continue;
        if (i == n)
        {
            xuat();
            res++;
        }
        else
        {
            backtracking(i + 1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    backtracking(1);
    cout << res;
}