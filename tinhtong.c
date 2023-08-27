#include<stdio.h>
int main(){
	long long a,x,b[10000],i,j,d,f;
	scanf("%lld%lld",&a,&x);
	for(i=0;i<a;i++){
		scanf("%lld",&b[i]);
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(b[i]+b[j]==x){
				d=b[i];
				f=b[j];
			}
		
		}
	}
	if(d<f){printf("%lld %lld",d,f);
	}else{printf("%lld %lld",f,d);
	}
}
