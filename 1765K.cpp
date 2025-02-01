#include <bits/stdc++.h>
 
using namespace std;
 
const int64_t inf = 1e18;
 
void solve() {
    int64_t n;
    cin >> n;
    vector<vector<int64_t>> a(n, vector<int64_t>(n));
    for (int64_t i = 0; i < n; ++i)
        for (int64_t j = 0; j < n; ++j) cin >> a[i][j];
    int64_t s = 0;
    for (const auto& r : a)
        for (int64_t v : r) s += v;
    int64_t m = a[0][n - 1];
    for (int64_t i = 0; i < n; ++i) m = min(m, a[i][n - 1 - i]);
    cout << s - m << endl;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; ++i)
        solve();
    return 0;
}
