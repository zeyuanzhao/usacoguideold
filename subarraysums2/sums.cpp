#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int x; cin >> x;

    vector<long long> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    long long prefix = 0;
    long long ans = 0;
    map<long long, int> sums;
    sums[0] = 1;
    for (auto i : array) {
        prefix += i;
        ans += sums[prefix - x];
        sums[prefix]++;
    }
    cout << ans;
}