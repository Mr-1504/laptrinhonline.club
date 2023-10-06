#include <bits/stdc++.h>
using namespace std;
bool kiemxau(string &str)
{
    for (char c : str)
    {
        if (!islower(c) || !isalpha(c))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a;
    getline(cin, a);

    if (kiemxau(a))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
