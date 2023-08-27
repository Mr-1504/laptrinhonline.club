#include<bits/stdc++.h>

using namespace std;
int main(){
	string b; 
	getline(cin,b);
	deque<char>a;
	for(int i=0;i<b.length();i++){
		if(b[i]!='#'){
			a.push_back(b[i]);
		}else if (b[i]=='#'&&!a.empty())
		{
			a.pop_back();
		}
	}
	while(!a.empty()){
		cout<<a.front();
		a.pop_front(); 
	}
}