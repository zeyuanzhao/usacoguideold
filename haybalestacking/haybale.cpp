#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int k; cin >> k;
    vector<int> diff(n);
    for (int i = 0; i < k; i++) {
        int l, r;
        cin >> l >> r;
        diff[l-1]++;
        diff[r]--;
    }
    vector<int> arr(n);
    int amount = 0;
    for (int i = 0; i < n; i++) {
        amount += diff[i];
        arr[i] = amount;
    }
    sort(arr.begin(), arr.end());
    cout << arr[n/2];
}