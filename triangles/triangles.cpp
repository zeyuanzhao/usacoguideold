#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> posts(n);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int y; cin >> y;
        posts[i] = {x, y};
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (posts[i].first == posts[j].first && posts[j].second == posts[k].second) {
                    int area = abs(posts[i].first - posts[k].first) * abs(posts[i].second - posts[k].second);
                    ans = max(ans, area);
                }
            }
        }
    }
    cout << ans;
}