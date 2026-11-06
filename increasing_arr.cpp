#include<bits/stdc++.h>

#define N 200005

using namespace std;

int main() {
    // if (freopen("inp.txt", "r", stdin)) freopen("out.txt", "w", stdout);

    uint32_t n; cin >> n;
    uint32_t a[N];

    for (uint32_t i = 0; i < n; i++) cin >> a[i];

    uint64_t moves = 0;

    for (uint32_t i = 1; i < n; i++) {
        if (a[i] < a[i-1]) {
            moves += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    cout << moves;

    return 0;
}