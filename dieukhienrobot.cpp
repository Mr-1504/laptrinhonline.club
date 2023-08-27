#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,x=1,y=0;
	cin>>n;
	bool p=true,l=false,t=false,xu=false;
	for(int i=0;i<n;i++){
		string a;
		cin>>a;
		if(p){
            if(a=="thang"){
                x++;
            }else if(a=="trai"){
                y++;
                p=false;
                l=true;
            }else{
                y--;
                xu=true;
                p=false;
            }
        }else if(t){
            if(a=="thang"){
                x--;
            }else if(a=="trai"){
                y--;
                t=false;
                xu=true;
            }else{
                y++;
                l=true;
                t=false;
            }
        }else if(l){
            if(a=="thang"){
                y++;
            }else if(a=="trai"){
                x--;
                l=false;
                t=true;
            }else{
                x++;
                p=true;
                l=false;
            }
        }else{
            if(a=="thang"){
                y--;
            }else if(a=="trai"){
                x++;
                xu=false;
                p=true;
            }else{
                x--;
                t=true;
                xu=false;
            }
        }
	}
    cout<<x<<" "<<y;
}