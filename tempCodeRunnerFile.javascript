#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string n, x = "";
    cin >> n;
    stack<char> operators;
    
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '(') {
            operators.push('(');
        } else if (n[i] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                x += operators.top();
                operators.pop();
            }
            if (!operators.empty())
                operators.pop(); // Remove '('
        } else if (isOperator(n[i])) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(n[i])) {
                x += operators.top();
                operators.pop();
            }
            operators.push(n[i]);
        } else {
            while (i < n.length() && isalnum(n[i])) {
                x += n[i];
                i++;
            }
            x += ' ';
            i--; // Backtrack the index
        }
    }
    
    while (!operators.empty()) {
        x += operators.top();
        operators.pop();
    }
    
    cout << x << endl;
    
    return 0;
}
