#include <bits/stdc++.h>
using namespace std;
int cheo[100], cheo2[100], cot[100], res = 0;
char a[9][9];
void backtracking(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if(a[i][j]=='*') continue;
        if (cot[j] == 0 && cheo[i - j + 8] ==0 && cheo2[i + j - 1] == 0 )
        {
            cheo[i - j + 8] = 1;
            cheo2[i + j - 1] = 1;
            cot[j] = 1;
            if (i == 8)
                res++;
            else
            {
                backtracking(i + 1);
            }
            cheo[i - j + 8] = 0;
            cheo2[i + j - 1] = 0;
            cot[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin>>a[i][j];
        }
    }
    // for(int i = 0; i < 100; i++){
    //     cot[i] = 1;
    //     cheo[i] = 1;
    //     cheo2[i] = 1;
    // }
    backtracking(1);
    cout << res;
    return 0;
}