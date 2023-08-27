#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int de2=0,de3=0,de4=0,de5=0;
    for(int i=0;i<n;i++){
        int x=0;
        cin>>x;
        if(x%2==0) de2++;
        if(x%3==0) de3++;
        if(x%4==0) de4++;
        if(x%5==0) de5++;
    }
    cout<<de2<<" Multiplo(s) de 2"<<endl<<de3<<" Multiplo(s) de 3"<<endl<<de4<<" Multiplo(s) de 4"<<endl<<de5<<" Multiplo(s) de 5";
}