#include<stdio.h>
int main(){
	int t,g,a,b;a=0;
	scanf("%d%d",&t,&g);
	if (t-g>0){
		a=(t-g)/2;
		b=g;
	}else if(g-t>0){
		a=(g-t)/2;b=t;
	}
	printf("%d %d",b,a);
}
