#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    getline(cin, a);
    int moc = 0, dem = -1, n;
    n = a.size();
    int c[n];
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '&')
        {
            if (i != 0)
            {
                if (a[i + 1] == 's')
                {
                    if (b.size() != i)
                    {
                        dem++;
                        b = a.substr(0, i);
                        a.erase(i, 2);
                        i--;
                        c[dem] = b.size();
                    }
                    else
                    {
                        a.erase(i, 2);
                        i--;
                    }
                }
                else if (a[i + 1] == 'z')
                {
                    if (dem == -1)
                    {
                        a.erase(0, i + 2);
                        i = -1;
                    }
                    else if (dem == 0)
                    {
                        if (c[dem] != i)
                        {
                            a.erase(c[dem], i + 2 - c[dem]);
                            dem--;
                            if (b.size() != 0)
                                i = b.size() - 1;
                            else
                                i = 0;
                        }
                        else
                        {
                            a.erase(0, i +2);
                            dem--;
                            i = -1;
                            
                        }
                    }
                    else
                    {
                        a.erase(c[dem], i + 2 - c[dem]);
                        i = c[dem] - 1;
                        dem--;
                    }
                }
                else
                {
                    a.erase(i, 2);
                    i--;
                }
            }
            else
            {
                a.erase(0, 2);
                i = -1;
            }
        }
    }
    cout << a;
    return 0;
}