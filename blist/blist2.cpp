#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n; cin >> n;
    vector<int> buckets(1000);
    for (int i = 0; i < n; i++) {
        int s, t, b;
        cin >> s >> t >> b;
        for (int j = s-1; j < t; j++) {
            buckets[j] += b;
        }
    }
    cout << *max_element(buckets.begin(), buckets.end());
}