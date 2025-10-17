#include <iostream>
using namespace std;

int main() {
    int so, mu;
    const int mod = 9901;
    int result = 1;
    cout << "So: ";
    cin >> so;
    cout << "Mu: ";
    cin >> mu;
    while (mu--){
        result = (result * so) % mod;
    }
    cout << result;
}

