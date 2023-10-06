#include <bits/stdc++.h>
using namespace std;
int n;
void thap(int n, int a, int b, int c)
{
    if (n == 1)
    {
        cout << a << " " << c << endl;
    }
    else
    {
        thap(n - 1, a, c, b);
        cout << a << " " << c << endl;
        thap(n - 1, b, a, c);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    cout << pow(2, n)-1 << endl;
    thap(n, 1, 2, 3);
    return 0;
}