#include <bits/stdc++.h>
 
using namespace std;
 
const int64_t inf = 1e18;
 
void solve() {
    int n;
    cin >> n;
    vector<string> m(n);
    for (int i = 0; i < n; ++i) cin >> m[i];
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - 1; ++j)
            if (m[i][j] == '1' && m[i + 1][j] == '0' && m[i][j + 1] == '0') {
                cout << "NO" << endl;
                return;
            }
    cout << "YES" << endl;
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
