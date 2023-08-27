#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int x,y;
    string abc="ABCDE";
    scanf("%d%d",&y,&x);
    if(y<3 || (y<=4 && x%2!=0)) return !printf("-1");
    printf("%d\n%c",y-3+x%2,abc[x/2]);
}