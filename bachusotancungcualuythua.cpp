#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Hàm tính a^b
string pow(string a, int b) {
    string result = "1";
    
    for (int i = 0; i < b; i++) {
        string temp = "0";
        int carry = 0;
        
        for (int j = a.size() - 1; j >= 0; j--) {
            int digit = (a[j] - '0') * b + carry;
            temp.insert(temp.begin(), (digit % 10) + '0');
            carry = digit / 10;
        }
        
        if (carry > 0) {
            temp.insert(temp.begin(), carry + '0');
        }
        
        int len = result.size();
        int tempLen = temp.size();
        carry = 0;
        string newResult = "";
        
        for (int j = 0; j < len || j < tempLen || carry > 0; j++) {
            int digitA = (j < len) ? (result[len - 1 - j] - '0') : 0;
            int digitB = (j < tempLen) ? (temp[tempLen - 1 - j] - '0') : 0;
            int sum = digitA + digitB + carry;
            newResult.insert(newResult.begin(), (sum % 10) + '0');
            carry = sum / 10;
        }
        
        result = newResult;
    }
    
    return result;
}

int main() {
    string a, b;
    cin >> a >> b;
    
    // Chuyển b từ chuỗi sang số nguyên
    int exponent = stoi(b);
    
    // Tính a^b
    string result = pow(a, exponent);
    
    // Lấy ba chữ số cuối cùng
    string lastThreeDigits = result.substr(result.size() - 3);
    
    // In ra kết quả
    cout << lastThreeDigits << endl;
    
    return 0;
}
