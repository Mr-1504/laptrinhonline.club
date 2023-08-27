#include<stdio.h>
#include<math.h>
float dodai(float a, float b){
return	sqrt(a*a+b*b);
}
int main(){
	int n,i,c,d;d=0;
	float r,b,x[i],y[i],e;b=0;
	scanf("%f%d",&r,&n);
	for (i=0;i<n;i++){
		scanf("%f%f",&x[i],&y[i]);
		e=dodai(x[i],y[i]);
		if(b<e&&e<=r){
			b=e;
			c=i;d++;
		}
	}
	if(d!=0){
		printf("%.0f %.0f",x[c],y[c]);
	}else{
		printf("0");
	}
}
