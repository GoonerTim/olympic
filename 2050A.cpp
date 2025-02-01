#include <bits/stdc++.h>
 
using namespace std;
 
const int64_t inf = 1e18;
 
void solve() {
    int64_t n, m;
    cin >> n >> m;
    int64_t r = 0;
    for (int64_t i = 0; i < n; ++i) {
        string s;
        cin >> s;
        int64_t k = s.length();
        if (m >= k) {
            m -= k;
            r += 1;
        } else m = -1;
    }
    cout << r << endl;
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
