#include<bits/stdc++.h>

using namespace std;

int main() {
    // if (freopen("inp.txt", "r", stdin)) freopen("out.txt", "w", stdout);

    int64_t n; cin >> n;

    int64_t total_sum = (n + 1) * n / 2;
    if (total_sum & 1) {
        cout << "NO" << endl;
        return 0;
    } 
    else
        cout << "YES" << endl;

    vector<int64_t> set1, set2;
    int64_t half_sum = total_sum / 2;
    for (int64_t i = n; i > 0; --i) {
        if (half_sum - i >= 0) {
            set1.push_back(i);
            half_sum -= i;
        }
        else
            set2.push_back(i);
    }

    int64_t n1 = set1.size(), n2 = set2.size();
    cout << n1 << endl;
    for (int64_t i = 0; i < n1; ++i)
        cout << set1[i] << " ";

    cout << endl << n2 << endl;
    for (int64_t i = 0; i < n2; ++i)
        cout << set2[i] << " ";

    return 0;
}