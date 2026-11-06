#include<bits/stdc++.h>

using namespace std;

uint64_t num_spiral(uint64_t y, uint64_t x) {
    uint64_t k = max(y, x);

    if (k & 1) {
        if (y == k) return (k - 1) * (k - 1) + x;
        else return k * k - y + 1;
    }
    else {
        if (y == k) return k * k - x + 1;
        else return (k - 1) * (k - 1) + y;
    }
}

int main() {
    // if (freopen("inp.txt", "r", stdin)) freopen("out.txt", "w", stdout);

    uint32_t t; cin >> t;
    for (uint32_t _ = 0; _ < t; ++_) {
        uint64_t y, x; cin >> y >> x;
        cout << num_spiral(y, x) << endl;
    }

    return 0;
}