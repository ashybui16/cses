#include<bits/stdc++.h>

#define MOD 1000000007

using namespace std;

uint64_t power_mod(uint64_t x) {
    if (x == 0) return 1;
    
    if (x & 1) return (2 * (power_mod(x - 1) % MOD)) % MOD;
    else {
        uint64_t half = power_mod(x / 2);
        return (half * half) % MOD;
    }
}

int main() {
    // if (freopen("inp.txt", "r", stdin)) freopen("out.txt", "w", stdout);

    uint64_t n; cin >> n;
    cout << power_mod(n);

    return 0;
}