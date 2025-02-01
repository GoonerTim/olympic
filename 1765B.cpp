#include <bits/stdc++.h>
 
using namespace std;
 
const int64_t inf = 1e18;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool f = (n % 3 != 2);
    for (int i = 1; i < n - 1; i += 3) {
        if (s[i] != s[i + 1]) {
            f = false;
            break;
        }
    }
    if (f) cout << "YES" << endl;
    else cout << "NO" << endl;
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
