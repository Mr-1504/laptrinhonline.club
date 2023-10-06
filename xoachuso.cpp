#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long num;
    vector<long long> numbers;

    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end(), greater<long long>());
    
    long long total = 0;
    long long multiplier = 1;
    
    for (int i = 0; i < numbers.size(); i++) {
        total += numbers[i] * multiplier;
        multiplier *= 10;
    }

    cout << total << endl;

    return 0;
}