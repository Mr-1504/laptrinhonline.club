#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
    if(a>0){
        if(b==1||b==3||b==5||b==7||b==8||b==10){
           if(a<31){
           printf("%d/%d/%d",a+1,b,c);
           }else if(a==31){
            printf("1/%d/%d",b+1,c);
           }
        }else if(b==2){
            if (c%4==0){
                if(a<29){
                    printf("%d/2/%d",a+1,c);
                }else if (a==29){
                    printf("1/%d/%d",b+1,c);
                }
            }else {
                if(a<28){
                    printf("%d/2/%d",a+1,c);
                }else if (a==28){
                    printf("1/%d/%d",b+1,c);
                }
            }
        }else if(b==12){
            if(a>0&&a<31){
                printf("%d/%d/%d",a+1,b,c);
            }if(a==31){
                printf("1/1/%d",c+1);
            }}else if (b==4||b==6||b==9||b==11){
            if(a<30){
                    printf("%d/%d/%d",a+1,b,c);
                }else if (a==30){
                    printf("1/%d/%d",b+1,c);
                }
        }

}}