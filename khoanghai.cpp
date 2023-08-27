#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], in = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= 10 && a[i] <= 20)
            in++;
    }
    cout << in << " trong" << endl
         << n - in << " ngoai";
}