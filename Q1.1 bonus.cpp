#include <bits/stdc++.h>
using namespace std;

int main() {
    const string alphabet = "abcd";
    int n = 10;
    long long k = 100 - 1;
    string res = "";
    for (int i = 0; i < n; i++) {
        int digit = k % 4;
        res += alphabet[digit];
        k /= 4;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}
