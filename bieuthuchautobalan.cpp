#include <bits/stdc++.h>
using namespace std;
bool dautoantu(char c) {
    return (c=='+'||c=='-'||c=='*'||c=='/');
}
int dau(char c) {
    if (c=='+'||c=='-')
        return 1;
    if (c=='*'||c=='/')
        return 2;
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    string n, x = "";
    cin >> n;
    stack<char> a;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '(') {
            a.push('(');
        } else if (n[i] == ')') {
            while (!a.empty() && a.top() != '(') {
                x += a.top();
                a.pop();
            }
            if (!a.empty())
                a.pop(); 
        } else if (dautoantu(n[i])) {
            while (!a.empty() && dau(a.top()) >= dau(n[i])) {
                x += a.top();
                a.pop();
            }
            a.push(n[i]);
        } else {
            while (i < n.length() && isalnum(n[i])) {
                x += n[i];
                i++;
            }
            i--; 
        }
    }
    while (!a.empty()) {
        x += a.top();
        a.pop();
    }
    stack<int> res;
    for (int i = 0; i < x.length(); i++) {
        if (dautoantu(x[i]) && res.size() >= 2) { 
            int z = res.top();
            res.pop();
            int y = res.top();
            res.pop();
            if (x[i] == '+') {
                res.push(y + z);
            } else if (x[i] == '-') {
                res.push(y - z);
            } else if (x[i] == '*') {
                res.push(y * z);
            } else {
                res.push(y / z);
            }
        } else {
            res.push(x[i]-'0');
        }
    }
    cout << x << endl<<res.top();
    return 0;
}
