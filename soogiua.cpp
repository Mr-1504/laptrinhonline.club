#include <stdio.h>
int a, b, min = 1000000000, max = -1000000000;
bool c = true;
int main(){
    for (int i = 0; i < 3; i++){
        scanf("%d", &a);
        if (a <= min){
            b = min;
            min = a;
        }
        if (a >= max){
            b = max;
            max = a;
        }
    }
    if (b != max && b != min)
        printf("%d", b);
    else
        printf("KHONG CO SO O GIUA");
}