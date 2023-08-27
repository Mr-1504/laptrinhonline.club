#include <iostream>
using namespace std;

int fibonacci(int n)
{

    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    int f[n];
    f[1] = 0;
    f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int s(int n)
{
	int tong=0;
    for (int i = 0; i < n; i++)
    {
        tong += fibonacci(i + 1);
    }
    return tong;
}

int main()
{
    cout<<"\n\t\t\t\t\t\t\\_____________________^-^____________________/";
cout<<"\n\t\t\t\t\t\t             TRUONG VAN MINH 221230928\t\t\n";
    int n;
    cout<<"Can tim so thu: ";
    cin >> n;
    cout <<endl << "So Fibonacci thu " << n << " la: " << fibonacci(n) << endl
         << "Tong " << n << " so fibonacci dau tien la :" << s(n);
    return 0;
}
