#include <bits/stdc++.h>
using namespace std;
int n, cheo[100], cheo2[100], cot[100], cnt = 0;
void backtracking(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 0 && cheo[i - j + n] == 0 && cheo2[i + j - 1] == 0)
        {
            cot[j] = 1;
            cheo[i - j + n] = 1;
            cheo2[i + j - 1] = 1;
            if (i == n)
            {
                cnt++;
            }
            else
            {
                backtracking(i + 1);
            }
            cot[j] = 0;
            cheo[i - j + n] = 0;
            cheo2[i + j - 1] = 0;
        }
    }
}
int main()
{
    cin >> n;
    backtracking(1);
    cout << cnt;
}
