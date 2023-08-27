#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i * 2; j++){
            printf(" ");
        }
        for (int j = 0; j < n-i; j++){
            printf("*");
        }printf("\n");
    }
    for (int i = n - 2; i >= 0; i--){
         for (int j = 0; j < i * 2; j++){
            printf(" ");
        }
        for (int j = 0; j < n-i; j++){
            printf("*");
        }printf("\n");
    }
}