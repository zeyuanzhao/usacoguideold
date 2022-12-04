#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> weights(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());
    int total = INT32_MAX;
    for (int i = 0; i < 2 * n; i++) {
        for (int j = i + 1; j < 2 * n; j++) {
            vector<int> s;
            for (int k = 0; k < 2 * n; k++) {
                if (k != i && k != j) {
                    s.push_back(weights[k]);
                }
            }

            int temp = 0;
            for (int k = 0; k < 2 * n - 2; k += 2) {
                temp += s[k + 1] - s[k];
            }
            total = min(temp, total);
        }
    }
    cout << total << endl;
}