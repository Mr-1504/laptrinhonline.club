#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[5], chan = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            chan++;
    }
    cout << chan << " Gia tri";
}