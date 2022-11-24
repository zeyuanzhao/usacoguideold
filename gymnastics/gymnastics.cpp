#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> cows(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int r;
            cin >> r;
            cows[i][r - 1] = j;
        }
    }
    int total = 0;
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            bool consistent = true;
            bool original = cows[0][i] > cows[0][j];
            for (int k = 0; k < n; k++) {
                if (cows[k][i] > cows[k][j] != original) {
                    consistent = false;
                }
            }
            if (consistent) {
                total++;
            }
        }
    }
    cout << total;
}