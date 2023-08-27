#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, p;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        long a;
        cin >> a;
        long x = a / n;
        long y = a % n;
        if (y == 0)
        {
            y = n-1;
            x = x - 1;
        }
        else
        {
            y = y - 1;
        }
        cout<<y*n+x+1<<" ";
    }
}