#include <bits/stdc++.h>
 
using namespace std;
 
const int64_t inf = 1e18;
 
void solve() {
    int64_t n;
    cin >> n;
    int64_t g = 2;
    vector<int64_t> r = {1, n - 1};
    while (g * g <= n) {
        if (n % g == 0) {
            if (max(n - g, g) <= max(r[0], r[1])) r = {g, n - g};
            int64_t f = n / g;
            if (max(f, n - f) <= max(r[0], r[1])) r = {f, n - f};
        }
        g += 1;
    }
    cout << r[0] << " " << r[1] << endl;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
        solve();
    return 0;
}
