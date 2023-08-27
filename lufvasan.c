#include<stdio.h>
int main(){
	float n,a[100][100];int i;
	scanf("%f",&n);
	for (i=0;i<n;i++){
			scanf("%f%f",&a[i][0],&a[i][1]);
	}
	for (i=0;i<n;i++){
		if (a[i][0]==a[i][1]*a[i][1]){
		printf("Yes\n");}else if (a[i][1]==a[i][0]*a[i][0]){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
}
