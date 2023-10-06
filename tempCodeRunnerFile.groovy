#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    // Khởi tạo đồ thị vô hướng.
    adj.assign(n + 1, vector<int>());
    visited.assign(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        // Thêm cạnh a -> b và b -> a (đồ thị vô hướng).
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int numComponents = 0; // Số lượng khu vực.
    int maxStudents = 0; // Số lượng sinh viên trong khu vực đông nhất.

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            int currentSize = 0;
            dfs(i); // Duyệt từ đỉnh i để xác định một khu vực.
            numComponents++;

            // Đếm số lượng sinh viên trong khu vực hiện tại.
            for (int j = 1; j <= n; j++) {
                if (visited[j]) {
                    currentSize++;
                }
            }

            maxStudents = max(maxStudents, currentSize);
        }
    }

    cout << numComponents << " " << maxStudents << endl;

    return 0;
}
