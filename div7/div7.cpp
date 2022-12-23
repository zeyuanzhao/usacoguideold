#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> cows(n);
    for (int i = 0; i < n; i++) {
        cin >> cows[i];
    }
    vector<long long> sums(n+1, 0);
    partial_sum(cows.begin(), cows.end(), sums.begin() + 1);
    int ans = 0;
    for (int i = 1; i < n; i++) {
        for(int j = i; j < n; j++) {
            if ((sums[j] - sums[i-1]) % 7 == 0) {
                ans = max(ans, j - i + 1);
            }
        }
    }
    cout << ans << endl;
}