#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int b[a],i,j,k,max,min;j=0;k=0;
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
		}
		max=0;min=b[0];
	for(i=0;i<a;i++){
		if(max<b[i]){max=b[i];
		}
		if(min>b[i]){min=b[i];
		}
	}
	for(i=0;i<a;i++){
		if(max==b[i]||min==b[i])j++;
		
	}
	printf("%d",j);
}
