#include<bits/stdc++.h>
using namespace std;
int main(){
    char a1[3],a2[7],a3[3];
    fgets(a1,3,stdin);
    fgets(a2,7,stdin);
    fgets(a3,3,stdin);
    int b1=a1[0]-'0';
    int b2=a1[1]-'0';
    int b3=b1*10+b2;
    if(a3[0]=='P'){
        if(b3!=12){
            b3+=12;
        }
        printf("%d%s",b3,a2);
    }else{
        if(b3==12){
            printf("00%s",a2);
        }else
            printf("%s%s",a1,a2);
        
    }
    
}