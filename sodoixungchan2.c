#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    for(int i=0;i<strlen(a);i++){
        printf("%c",a[i]);
    }
    for(int i=strlen(a)-1;i>=0;i--){
        printf("%c",a[i]);
    }
}