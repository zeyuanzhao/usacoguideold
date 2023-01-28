#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n, m; cin >> n >> m;
    vector<int> road;
    for (int i = 0; i < n; i++) {
        int length, speed;
        cin >> length >> speed;
        for (int j = 0; j < length; j++) {
            road.push_back(speed);
        }
    }

    int t = 0;
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int length, speed;
        cin >> length >> speed;
        for (int j = 0; j < length; j++) {
            ans = max(ans, speed - road[t]);
            t++;
        }
    }
    cout << ans;
}