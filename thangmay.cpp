#include<bits/stdc++.h>
using namespace std;
int tim(int n, int k, int m, int s, int f) {
    vector<int> buoc(n + 1, -1);  
    queue<int> q;                 
    buoc[s] = 0;  
    q.push(s);
    while (!q.empty()) {
        int c = q.front();
        q.pop();
        if (c == f) {
            return buoc[c];
        }
        int len = c + k;
        if (len <= n && buoc[len] == -1) {
            buoc[len] = buoc[c] + 1;
            q.push(len);
        }
        int xuong = c - m;
        if (xuong >= 1 && buoc[xuong] == -1) {
        buoc[xuong] = buoc[c] + 1;
            q.push(xuong);
        }
    }
    return -1;  
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, k, m, s, f;
    cin >> n >> k >> m>> s >> f;
    cout<<tim(n, k, m, s, f);
}
