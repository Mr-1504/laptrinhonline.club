#include<stdio.h>
int main()
{
    int x,y;
    char abc[]="ABCDE";
    scanf("%d%d",&y,&x);
    if(y<3 || (y<=4 && x%2!=0)) return !printf("-1");
    printf("%d\n%c",y-3+x%2,abc[x/2]);
}