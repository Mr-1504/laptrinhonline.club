#include<stdio.h>
int main(){
	int i,d;d=0;
	long long  n,a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++){ 
		scanf("%d",&a[i]);
		if(a[i]==i){
			d++;
		}
	}
	printf("%d",d);
	
}
