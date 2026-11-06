#include<bits/stdc++.h>

using namespace std;

int main() {
    // if (freopen("inp.txt", "r", stdin)) freopen("out.txt", "w", stdout);

    uint64_t n; cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }

    while (1) {
        cout << n << " ";

        if (n % 2 == 0) n >>= 1;
        else n = 3 * n + 1;
        
        if (n == 1) {
            cout << 1;
            break;
        }
    }

    return 0;
}