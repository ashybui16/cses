#include<bits/stdc++.h>

using namespace std;

int main() {
    // if (freopen("inp.txt", "r", stdin)) freopen("out.txt", "w", stdout);

    uint64_t n; cin >> n;
    
    uint64_t all, attack;
    for (uint64_t i = 1; i <= n; i++) {
        if (i == 1) cout << "0" << endl;
        else if (i == 2) cout << "6" << endl;
        else {
            all = i * i * (i * i - 1) / 2;
            attack = 4 * (i - 1) * (i - 2);
            cout << all - attack << endl;
        }
    }

    return 0;
}