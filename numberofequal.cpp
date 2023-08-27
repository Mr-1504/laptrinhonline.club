#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    int i = 0, j = 0, count = 0, temp = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            count++;
            i++;
            temp++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            i -= temp;
            temp = 0;
            j++;
        }
    }
    cout << count;
}