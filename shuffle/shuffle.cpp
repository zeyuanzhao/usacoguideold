#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n;
    cin >> n;
    cout << n;
    vector<int> shuffle(n);
    int t;
    for (int i = 0; i < n; i++) {
        cin >> t;
        shuffle[t] = i;
    }

    vector<int> ids(n);
    for (int i = 0; i < n; i++) {
        cin >> ids[i];
    }

    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    b = a;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j< 5; j++) {
            b[shuffle[i]] = a[i];
        }
        a = b;
    }
    for (int i = 0; i < n; i++) {
        cout << ids[b[i]];
    }
}