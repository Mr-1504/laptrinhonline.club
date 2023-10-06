#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n, k, m, s, f;
int a[101];
int b[10001];
int c[10001];
void bfs(int i)
{
    queue<int> thang;
    thang.push(i);
    c[i] = 0;
    b[i] = 1;
    int check = 1;
    while (!thang.empty())
    {
        int top = thang.front();
        thang.pop();
        for (int h = 0; h < k; h++)
        {
            int j = top + a[h];
            if (j >= 1 && j <= n && !b[j])
            {
                thang.push(j);
                b[j] = 1;
                c[j] = c[top] + 1;
                if (j == f)
                {
                    check = 0;
                    break;
                }
            }
        }
        if (check == 0)
            break;
    }
    if (!b[f])
        cout << -1;
    else
        cout << c[f];
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    cin >> s >> f;
    bfs(s);
    return 0;
}