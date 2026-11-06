#include<bits/stdc++.h>

#define N 2 * 100000 + 5

using namespace std;

int main() {
    // if (freopen("inp.txt", "r", stdin)) freopen("out.txt", "w", stdout);

    uint32_t n; cin >> n;
    uint32_t a[N] = {0};
    for (uint32_t _ = 1; _ <= n; _++) {
        uint32_t x; cin >> x;
        a[x] = 1;
    }

    for (uint32_t i = 1; i <= n + 1; i++) {
        if (!a[i]) {
            cout << i;
            break;
        }
    }

    return 0;
}