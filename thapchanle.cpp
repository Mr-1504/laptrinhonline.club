#include<stdio.h>
int main(){
	int n,i,a[1000],b,c;b=0;c=0;
	scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>b){
			b=a[i];
		}
	}
	for(i=0;i<n;i++){
	    if(a[i]<b&&a[i]>c){
	    	c=a[i];}}
	printf("%d",b+c);
}
