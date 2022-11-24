#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<string> spotty(n);
    vector<string> plain(n);

    for (int i = 0; i < n; i++) {
        cin >> spotty[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> plain[i];
    }

    int total = 0;
    for (int i = 0; i < m; i++) {
        bool possible = true;
        set<char> spottyLetters;
        for (int j = 0; j < n; j++) {
            spottyLetters.insert(spotty[j][i]);
        }
        for (int j = 0; j < n; j++) {
            if (spottyLetters.find(plain[j][i]) != spottyLetters.end()) {
                possible = false;
            }
        }
        if (possible) {
            total++;
        }
    }
    cout << total;
}