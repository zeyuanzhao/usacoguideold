#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    int n; cin >> n;
    vector<int> sums(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        sums[i] = (t + sums[i-1]) % 7;
    }
    int ans = 0;
    vector<int> last_index(7, -1);
    for (int i = 1; i <= n; i++) {
        if (last_index[sums[i]] == -1) {
            last_index[sums[i]] = i;
            continue;
        }
        ans = max(ans, i - last_index[sums[i]]);
    }
    cout << ans;
}