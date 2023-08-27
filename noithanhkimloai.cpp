#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // priority_queue<int> a;
    int b[n];
    priority_queue<int, vector<int>, greater<int>> a;
    int phi = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        a.push(b[i]);
    }
    while (a.size() != 1)
    {
        int a1 = a.top();
        a.pop();
        int a2 = a.top();
        a.pop();
        phi += a1 + a2;
        a.push(a1 + a2);
    }
    cout << phi;
}