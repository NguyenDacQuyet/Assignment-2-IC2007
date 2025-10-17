#include <bits/stdc++.h>
using namespace std;

int main() {
    const string alphabet = "abcd";
    int n = 5;
    int total = pow(4, n);
    int target = 100;
    string res;
    for (int i = 0; i < total; i++) {
        int x = i;
        string s = "";
        for (int j = 0; j < n; j++) {
            s += alphabet[x % 4];
            x /= 4;
        }
        reverse(s.begin(), s.end());
        cout << s << "\n";
        if (i + 1 == target) res = s;
    }
    cout << "\nPhan tu thu " << target << " la: " << res << endl;
    return 0;
}

