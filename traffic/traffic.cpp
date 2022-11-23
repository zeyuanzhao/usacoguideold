#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    int n;
    cin >> n;

    int a = 0, b = 1000;

    for (int i = 0; i < n; i++) {
        string m;
        int x, y;
        cin >> m >> x >> y;
        if (m == "none") {a = max(a, x); b = min(b, y);}
        else if (m == "off") {a -= x; b -= y;}
        else if (m == "on") {a += x; b += y;}
    }
    cout << a << " " << b << endl;

    a = 0, b = 1000;

    for (int i = 0; i < n; i++) {
        string m;
        int x, y;
        cin >> m >> x >> y;
        if (m == "none") {a = max(a, x); b = min(b, y);}
        else if (m == "off") {a += x; b += y;}
        else if (m == "on") {a -= x; b -= y;}
    }
    cout << a << " " << b << endl;
}