#include <bits/stdc++.h>
 
using namespace std;
 
const int64_t inf = 1e18;
 
void solve() {
    int64_t n;
    cin >> n;
    vector<int64_t> p(n);
    for (int64_t i = 0; i < n; ++i) {
        int64_t k;
        cin >> k;
        p[i] = k - 1;
    }
    string s;
    cin >> s;
    vector<int64_t> a(n + 1, 0);
    vector<int64_t> d(n + 1, 0);
    for (int64_t i = 0; i < n; ++i) {
        if (d[i] == 1) continue;
        int64_t c = 0;
        while (d[i] == 0) {
            d[i] = 1;
            if (s[i] == '0') c += 1;
            i = p[i];
        }
        while (d[i] != 2) {
            a[i] = c;
            d[i] = 2;
            i = p[i];
        }
    }
    for (int64_t i = 0; i < n; ++i) 
        cout << a[i] << " ";
    cout << endl;
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
