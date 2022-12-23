#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int n, q;
    cin >> n >> q;

    vector<int> holsteins(n+1, 0);
    vector<int> guernseys(n+1, 0);
    vector<int> jerseys(n+1, 0);
    for (int i = 1; i <= n; i++) {
        int cow;
        cin >> cow;
        holsteins[i] = holsteins[i-1];
        guernseys[i] = guernseys[i-1];
        jerseys[i] = jerseys[i-1];
        if (cow == 1) {
            holsteins[i]++;
        } else if (cow == 2) {
            guernseys[i]++;
        } else {
            jerseys[i]++;
        }
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << holsteins[r] - holsteins[l-1] << " " << guernseys[r] - guernseys[l-1] << " " << jerseys[r] - jerseys[l-1] << endl;
    }
}