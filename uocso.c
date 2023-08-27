#include<stdio.h>
int uoc(int a){
	int i,s;s=0;
	for (i=1;i<=a;i++){
		if(a%i==0&&i%2==1){
	 s=s+i;}}
	return s;
	}
int main(){
	int j,d,s,n;
	int b[100],c[100];
	printf("%d",uoc(4));
	scanf("%d",&n);
	for(d=0;d<n;d++){
		scanf("%d%d",&b[d],&c[d]);
		}
	for (d=0;d<n;d++){
		s=0;
	for(j=b[d];j<=c[d];j++){
		s += uoc(j);
	}
	printf("%d\n",s);
}
}