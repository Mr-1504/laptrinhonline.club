#include<iostream>
using namespace std;
int main(){
    int a[100];
    for(int i=0;i<100;i++){
        cin>>a[i];
    }int max=a[0],vtri=0;
    for(int i=0;i<100;i++){
        if(a[i]>max){
            max=a[i];
            vtri=i;
        }
    }cout<<max<<endl<<vtri+1;
}