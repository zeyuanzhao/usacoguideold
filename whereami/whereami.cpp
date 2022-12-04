#include <iostream>
#include <cstdio>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    int n; cin >> n;
    string mailboxes; cin >> mailboxes;
    for (int k = 1; k < n; k++) {
        bool found = true;
        unordered_map<string, int> suboccur;
        for (int i = 0; i < n - k + 1; i++) {
            string sub = mailboxes.substr(i, k);
            suboccur[sub]++;
            if (suboccur[sub] > 1) {
                found = false;
                break;
            }
        }
        if (found) {
            cout << k << endl;
            break;
        }
    }
}