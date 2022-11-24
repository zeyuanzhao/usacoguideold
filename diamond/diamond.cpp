#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int max = 0;
    for (int a : v) {
        int count = 0;
        for (int b : v) {
            if (b - a <= k && b - a >= 0) {
                count++;
            }
        }
        if (count > max) {
            max = count;
        }
    }
    cout << max;
}