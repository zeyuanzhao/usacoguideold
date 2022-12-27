#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int m; cin >> m;

    vector<vector<int>> spotty(m, vector<int>(m));
    vector<vector<int>> plain(m, vector<int>(m));

    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        for (int j = 0; j < m; j++) {
            if (t[j] == 'A') {
                spotty[i][j] = 0;
            } else if (t[j] == 'T') {
                spotty[i][j] = 1;
            } else if (t[j] == 'C') {
                spotty[i][j] = 2;
            } else {
                spotty[i][j] = 3;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        for (int j = 0; j < m; j++) {
            if (t[j] == 'A') {
                plain[i][j] = 0;
            } else if (t[j] == 'T') {
                plain[i][j] = 1;
            } else if (t[j] == 'C') {
                plain[i][j] = 2;
            } else {
                plain[i][j] = 3;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        for (int j = i+1; j < m; j++) {
            for (int k = j+1; k < m; k++) {
                vector<bool> ids(64);
                for (int l = 0; l < n; l++) {
                    int sum = 16 * spotty[l][i] + 4 * spotty[l][j] + spotty[l][k];
                    ids[sum] = true;
                }
                bool found = false;
                for (int l = 0; l < n; l++) {
                    int sum = 16 * plain[l][i] + 4 * plain[l][j] + plain[l][k];
                    if (ids[sum]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    ans++;
                }
            }
        }
    }
    cout << ans;
}