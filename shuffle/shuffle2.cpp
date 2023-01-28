#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int n; cin >> n;
    vector<int> shuffle(n);
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        shuffle[tmp - 1] = i;
    }
    vector<int> cows(n);
    for (int i = 0; i < n; i++) {
        cin >> cows[i];
    }
    for (int i = 0; i < 3; i++) {
        vector<int> before(cows);
        for (int j = 0; j < n; j++) {
            cows[shuffle[j]] = before[j];
        }
    }
    for (auto cow : cows) {
        cout << cow << endl;
    }
}