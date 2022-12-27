#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> log(n);
        int total = 0;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            log[j] = tmp;
            total += tmp;
        }
        for (int x = n; x >= 1; x--) {
            if (total % x != 0) {
                continue;
            }
            int target = (int) total / x;
            int sum = 0;
            bool works = true;
            for (int j = 0; j < n; j++) {
                sum += log[j];
                if (sum == target) {
                    sum = 0;
                } else if (sum > target) {
                    works = false;
                    break;
                }
            }
            if (works) {
                cout << n - x << endl;
                break;
            }
        }
    }
}