#include<stdio.h>
int main(){
	int n,i,k,d[1000];
	scanf("%d",&n);
	int a[n],temp,j,b[10000],c;c=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]>a[i]){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;}}
	}
	for(i=0;i<n;i++){
		b[a[i]]=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				b[a[i]]++;
			}	}	}
	for (i=0;i<n-1;i++){
    j=i+1;
    while (j<n)
      if (a[i]==a[j]){
         for (k=j;k<n-1;k++) a[k]=a[k+1];
         n=n-1;
      }else j=j+1;
   }
   for (i=0;i<n;i++){
   	printf("%d %d\n",a[i],b[a[i]]);
   }	
}
