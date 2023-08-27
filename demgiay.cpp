#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,res=0;
    cin>>n;
    string input;
    int r[102]={0},l[102]={0},size[n];
    char rl[n];
    for(int i=0;i<n;i++){
        cin>>input;
        rl[i]=input[0];
        input.erase(0,1);
        size[i]=stoi(input);
        if(rl[i]=='R'){
            r[size[i]]++;
        }else{
            l[size[i]]++;
        }
    }
    for(int i=0;i<n;i++){
        if(rl[i]=='R'&&r[size[i]]!=0){
            if(l[size[i]]!=0){
                res++;
                l[size[i]]--;
                r[size[i]]--;
            }
        }
        if(rl[i]=='L'&&l[size[i]]!=0){
            if(r[size[i]]!=0){
                res++;
                l[size[i]]--;
                r[size[i]]--;
            }
        }
    }
    cout<<res;
}