#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> a;
vector<int> b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    a.assign(n + 1, vector<int>());
    b.assign(n + 1, -1);
    c.assign(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int k;
    cin >> k;
    c[0]=k;
    queue<int> temp;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        temp.push(x);
        b[x] = 0;
    }
    while (!temp.empty())
    {
        int x = temp.front();
        temp.pop();
        for (int y : a[x])
        {
            if (b[y] == -1)
            {
                temp.push(y);
                b[y] = b[x] + 1;
                c[b[y]]++;
            }
        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == 0)
            break;
        cout << "F" << i << ": " << c[i] << endl;
    }
    return 0;
}