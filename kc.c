//nhap 2 diem a b la hoanh do va tung do. tinh khoang cach cua hai diem
#include<stdio.h>
#include<math.h>
typedef struct{
	float x;
	float y;
}diem;
int main(){
	diem a[1];int i;
	float kc;
	for( i=0;i<2;i++){
		scanf("%f%f",&a[i].x,&a[i].y);
	}
	kc=sqrt(pow((a[0].x-a[1].x),2)+pow((a[0].y-a[1].y),2));
	printf("%10.3f",kc);
}
