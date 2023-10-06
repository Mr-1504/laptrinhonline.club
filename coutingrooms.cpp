#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1000;
const int MAX_M = 1000;
int n, m;
vector<vector<char>> a;
vector<vector<bool>> b;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
bool kiem_phong(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '.';
}
void dfs(int x, int y)
{
    b[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (kiem_phong(nx, ny) && !b[nx][ny])
        {
            dfs(nx, ny);
        }
    }
}
int demphong()
{
    int demphong = 0;
    b.assign(n, vector<bool>(m, false));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] == '.' && !b[i][j])
            {
                demphong++;
                dfs(i, j);
            }
        }
    }
    return demphong;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    a.resize(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }
    int rooms = demphong();
    cout << rooms << endl;
    return 0;
}
