#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main() {
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    int n;
    cin >> n;

    vector<string> mv(n);
    vector<int> xv(n), yv(n);

    for (int i = 0; i < n; i++) {
        cin >> mv[i] >> xv[i] >> yv[i];
    }

    int a = 0, b = 10000;
    for (int i = n - 1; i >= 0; i--) {
        string m = mv[i];
        int x = xv[i], y = yv[i];
        if (m == "none") {a = max(a, x); b = min(b, y);}
        else if (m == "off") {a += x; b += y;}
        else if (m == "on") {a -= y; b -= x; a = max(a, 0);}
    }
    cout << a << " " << b << endl;

    a = 0, b = 10000;

    for (int i = 0; i < n; i++) {
        string m = mv[i];
        int x = xv[i], y = yv[i];
        if (m == "none") {a = max(a, x); b = min(b, y);}
        else if (m == "off") {a -= y; b -= x; a = max(a, 0);}
        else if (m == "on") {a += x; b += y;}
    }
    cout << a << " " << b << endl;
    cout
}