#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;
    
    vector<string> signal(m);

    string t;
    for (int i = 0; i < m; i++) {
        cin >> t;
        signal[i] = t;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < n; l++) {
                for (int h = 0; h < k; h++) {
                    cout << signal[i][l];
                }
            }
            cout << endl;
        }
    }
}