#include<bits/stdc++.h>

using namespace std;

int main() {
    // if (freopen("inp.txt", "r", stdin)) freopen("out.txt", "w", stdout);

    string s; cin >> s;
    uint32_t n = s.size();

    char c = s[0];
    uint32_t count = 1, ans = 1;
    for (uint32_t i = 1; i < n; i++) {
        if (s[i] == c) {
            count++;
            ans = max(ans, count);
        }
        else {
            c = s[i];
            count = 1;
        }
    }

    cout << ans;

    return 0;
}