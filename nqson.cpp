#include<stdio.h>
int gthua(int n) {
   if (n > 0) {
      return n * gthua(n - 1);
   }
   else {
      return 1;
   }
}
int main(){
	int a,i,x,c,s,b[1000];
      c=1;
	scanf("%d",&a);
		for(i=1;i<=a;i++){
			scanf("%d",&b[i]);c=c*gthua(b[i]);
			}
	scanf("%d",&x);
	printf("%d",c/gthua(x));}
