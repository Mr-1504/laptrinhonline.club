#include <stdio.h>
int main(){
    float a,cnt=0;
    for (int i = 0; i < 6; i++){
        scanf("%f", &a);
        if(a>0) cnt++;
    }
    printf("\n%.0f so duong",cnt);
}