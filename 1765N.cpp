#include <bits/stdc++.h>
 
using namespace std;
 
const int64_t inf = 1e18;
 
void solve() {
    string x;
    cin >> x;
    int64_t k;
    cin >> k;
    int64_t n = x.length();
    if (k == 0) {
        cout << x << endl;
        return;
    }
    char m = '9';
    int64_t id = 0;
    for (int64_t i = 0; i <= k; ++i) {
        if (x[i] != '0' && x[i] < m) {
            m = x[i];
            id = i;
        }
    }
    vector<char> r;
    k -= id;
    int64_t p = id + 1;
    for (int64_t i = p; i < n; ++i) {
        while (!r.empty() && r.back() > x[i]) {
            if (k > 0) {
                r.pop_back();
                k -= 1;
            } else break;
        }
        r.push_back(x[i]);
    }
    int64_t q = r.size();
    cout << m;
    for (int64_t i = 0; i < q - k; ++i) cout << r[i];
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
