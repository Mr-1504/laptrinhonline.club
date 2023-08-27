#include <iostream>
using namespace std;
int n, M, a[21], s = 0;
void backtracking(int j, int c)
{
    if (j > n)
    {
        if (c <= M && c > s)
        {
            s = c;
        }
        return;
    }

    backtracking(j + 1, c);
    backtracking(j + 1, c + a[j]);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    scanf("%d%d", &n, &M);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    backtracking(1,0);
    cout << s;
}
