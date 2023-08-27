#include <bits/stdc++.h>
using namespace std;
int main()
{
    string b;
    cin >> b;
    priority_queue<char, vector<char>, greater<int>> a;
    for (int i = 0; i < b.size(); i++)
    {
        a.push(b[i]);
    }
    char i;
    int j = 0;
    while (!a.empty())
    {
        if (j == 0)
        {
            cout << "(";
            i = a.top();
        }
        
        if (i == a.top())
        {
            j++;
            if(a.size()==1){
            if(a.top()==i){
                cout << i << "^" << j << ")";
            }
        }
            a.pop();
        }
        //cout<<i<<a.top()<<endl;
        if (i != a.top())
        {
            cout << i << "^" << j << ")";
            j = 0;
        }
        
    }
}