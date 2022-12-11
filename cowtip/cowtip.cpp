#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;

void flip(int x, int y, vector<string> &cows) {
    for (int i = 0; i <=x; i++) {
        for (int j = 0; j <= y; j++) {
            if (cows[i][j] == '1') {
                cows[i][j] = '0';
            } else {
                cows[i][j] = '1';
            }
        }
    }
}

int main() {
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);
    int n; cin >> n;
    vector<string> cows(n);
    char c;
    for (int i = 0; i < n; i++) {
        cin >> cows[i];
    }
    int ans = 0;
    for (int i = n-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (cows[i][j] == '1') {
                flip(i, j, cows);
                ans++;
            }
        }
    }
    cout << ans;
}