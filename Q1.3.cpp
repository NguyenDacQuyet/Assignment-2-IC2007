#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 9901;

ll power(ll a, ll b) {
    ll res = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

ll modInverse(ll a) {
    return power(a, MOD - 2);
}

ll factMod(int n) {
    ll res = 1;
    for (int i = 1; i <= n; i++)
        res = (res * i) % MOD;
    return res;
}

int main() {
    int i = 100, j = 90, k = 80, l = 70;
    int sum = i + j + k + l;

    ll n = factMod(sum);
    ll d = (factMod(i) * factMod(j)) % MOD;
    d = (d * factMod(k)) % MOD;
    d = (d * factMod(l)) % MOD;

    ll result = (n * modInverse(d)) % MOD;

    cout << result << endl;
    return 0;
}