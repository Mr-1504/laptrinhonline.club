#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;
int ax, ay, bx, by, cx, cy, cnt;
char xy;
void test()
{
    if (xy == 'y')
    {
        if (ay == cnt)
        {
            cout << "A" << endl;
            return;
        }
        else if (by == cnt)
        {
            cout << "B" << endl;
            return;
        }
        else if (cy == cnt)
        {
            cout << "C" << endl;
            return;
        }
        if(ay>cnt&&by>cnt&&cy<cnt) {
            cout<<"C"<<endl;
            return;
        }
        if(ay>cnt&&cy>cnt&&by<cnt) {
            cout<<"B"<<endl;
            return;
        }
        if(cy>cnt&&by>cnt&&ay<cnt) {
            cout<<"A"<<endl;
            return;
        }
        if(ay<cnt&&by<cnt&&cy>cnt) {
            cout<<"C"<<endl;
            return;
        }
        if(ay<cnt&&cy<cnt&&by>cnt) {
            cout<<"B"<<endl;
            return;
        }
        if(cy<cnt&&by<cnt&&ay>cnt) {
            cout<<"A"<<endl;
            return;
        }
        cout<<0<<endl;
        return;
    }else{
        if (ax == cnt)
        {
            cout << "A" << endl;
            return;
        }
        else if (bx == cnt)
        {
            cout << "B" << endl;
            return;
        }
        else if (cx == cnt)
        {
            cout << "C" << endl;
            return;
        }
        if(ax>cnt&&bx>cnt&&cx<cnt) {
            cout<<"C"<<endl;
            return;
        }
        if(ax>cnt&&cx>cnt&&bx<cnt) {
            cout<<"B"<<endl;
            return;
        }
        if(cx>cnt&&bx>cnt&&ax<cnt) {
            cout<<"A"<<endl;
            return;
        }
        if(ax<cnt&&bx<cnt&&cx>cnt) {
            cout<<"C"<<endl;
            return;
        }
        if(ax<cnt&&cx<cnt&&bx>cnt) {
            cout<<"B"<<endl;
            return;
        }
        if(cx<cnt&&bx<cnt&&ax>cnt) {
            cout<<"A"<<endl;
            return;
        }
        cout<<0<<endl;
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> ax >> ay;
        cin >> bx >> by;
        cin >> cx >> cy;
        cin >> xy >> cnt;
        test();
    }

    return 0;
}