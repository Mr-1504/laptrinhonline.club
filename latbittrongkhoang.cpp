#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a;
    int maxx = INT_MIN;
    int minn = INT_MAX;
    cin >> a;
    int q;
    cin >> q;
    map<int, int> b;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        maxx = max(maxx, y);
        minn = min(minn, x);
        b[x]++;
        b[y]++;
        for(auto it:b){
            if(it.first>=x&&it.first<=y){
                it.second=k;
            }
        }
    }
    char k='0';
    for(int i=minn;i<=maxx;i++){

    }
    return 0;
}