#include <bits/stdc++.h>
 
using namespace std;
 
const int64_t inf = 1e18;
const int64_t mod = 1e9 + 7;
 
void solve() {
    int64_t n;
    cin >> n;
    int64_t r = 1;
    for (int64_t i = 1; i <= n; ++i) r = (i * r) % mod;
    int64_t p = 1;
    for (int64_t i = 0; i < n - 1; ++i) 
        p = (p * 2) % mod;
    cout << (r - p + mod) % mod << endl;
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
