#include<bits/stdc++.h>
using namespace std;
void tinh(int a[],int t,int dem){
    int cnt=0;
        if(dem!=0){
        if(dem%2==0){
            for(int j=0;j<dem-1;j++){
                cnt+=-a[j]-1;cout<<cnt<<1<<endl;
            }
            for(int j=dem-1;j<t;j++){
                cnt+=a[j]-1;cout<<cnt<<2<<endl;
            }
        }else{
            if(dem==1){
                cnt+=-a[0]+1;
                for(int j=1;j<t;j++){
                    cnt+=a[j]-1;cout<<cnt<<3<<endl;
                }
            }else{
                for(int j=0;j<dem-2;j++){
                    cnt+=-a[j]+1;cout<<cnt<<4<<endl;
                }
                for(int j=dem-2;j<t;j++){
                    cnt+=a[j]-1;cout<<cnt<<5<<endl;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        int a[t];
        int dem=0;
        for(int j=0;j<t;j++){
            cin>>a[j];
            if(a[j]<=0) dem++;
        }
        sort(a,a+t) ;
        tinh(a,t,dem);
    }
}