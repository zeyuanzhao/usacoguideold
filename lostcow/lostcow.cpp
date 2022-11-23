#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;
    cin >> x >> y;

    int total = 0;
    int zig = 1;
    int pos = x + 1;

    if (x == y) {
        cout << 0;
        return 0;
    }

    while (true) {
        if (abs(zig) >= abs(x - y) && (x + zig >= y && x < y || x + zig <= y && x > y)) {
            total += abs(x - y);
            break;
        }
        total += 2 * abs(zig);
        zig = -1 * (zig * 2);
        pos = x + zig;
    }

    cout << total;
}