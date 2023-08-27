#include<bits/stdc++.h>
using namespace std;

int a[100],h[100],n,s;
int d[100][10000],pre[100][10000];

void inp(int a[],int &n,int &s)
{
    scanf("%d",&n);
    s=0;
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
}

void init()
{
    for (int i=1;i<=n;i++)
    {
        d[i][a[i]]=1;
        pre[i][a[i]]=i;
    }
}

void solve()
{
    for (int i=2;i<=n;i++)
    for (int j=0;j<=s;j++)
        if (d[i-1][j]==1)   d[i][j]=1;
        else
            if ((j-a[i]>=0) && (d[i-1][j-a[i]]==1))
            {
                d[i][j]=1;
                pre[i][j]=i;
            }
}

void truyhoi(int n,int s)
{
    if ((n!=0)&&(s!=0))
    {
        if (pre[n][s]!=0)
        {
            truyhoi(n-1,s-a[pre[n][s]]);
            h[n]=1;
        }
        else
        if (d[n-1][s]=1)
            truyhoi(n-1,s);
    }
}

void out(int s1)
{
    truyhoi(n,s1);
    printf("%d",s-s1*2);
}

int main()
{
    inp(a,n,s);
    init();
    solve();
    for (int s1=s/2;s1>0;s1--)
        if (d[n][s1]==1) 
        {
            out(s1);
            break;
        }
    return 0;   
}