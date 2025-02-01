#include <bits/stdc++.h>
 
using namespace std;
 
const int64_t inf = 1e18;
 
bool ip(double a) {
    if (a != int64_t(a) || a == 1) return false;
    if (a == 2 || a == 3) return true;
    for (int i = 2; i <= sqrt(a); ++i)
        if (int64_t(a) % i == 0) return false;
    return true;
}
 
void solve() {
    int64_t n;
    cin >> n;
    vector<int64_t> x(n);
    for (int64_t i = 0; i < n; ++i) cin >> x[i];
    for (int64_t i : x) {
        if (ip(sqrt(i))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
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
