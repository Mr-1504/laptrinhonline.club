#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    getline(cin, s);
    string x = "";
    bool inhoa = true; // Đánh dấu việc chữ cái tiếp theo cần viết hoa

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (inhoa) {
                x.push_back(toupper(s[i])); 
                inhoa = false;
            } else {
                x.push_back(tolower(s[i])); 
            }
        } else {
            x.push_back(s[i]);
            if (s[i] == ' ') {
                inhoa = true; 
            }
        }
    }
    string res="";
    bool temp = false;
    for(int i=0;i<x.length();i++){
        if(x[i]!=' '){
            res+=x[i];
            temp=false;
        }else{
            if(!temp) {
                res+=' ';
                temp=true;
            }
        }
    }
    cout << res << endl;

    return 0;
}
