#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x, y;
    cin >> x >> y;
    int total = 0;
    int pos = x;
    int distance = 0;
    while (true) {
        if (x - y >= 0 && y - pos >= 0 || y - x >= 0 && pos - y >= 0) {
            total += abs(x - y);
            break;
        } else {
            total += 2 * abs(pos - x);
        }
        if (distance) distance *= -2;
        else distance = 1;
        pos = x + distance;
    }
    cout << total;
}