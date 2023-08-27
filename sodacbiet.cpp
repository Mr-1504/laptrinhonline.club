#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        char b=a[0];
        long long cnt=b-'0';
        b=a[a.length()-1];
        int temp=b-'0';
        int count=cnt*10+temp;
        cnt=stoi(a);
        if(a.length()>=3&&cnt%count==0){
            printf("YES\n");
        }else printf("NO\n");
    }
}