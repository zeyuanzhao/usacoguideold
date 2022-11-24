#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m;
    cin >> x >> y >> m;
    int max = 0;
    int iterations = m / y + 1;
    for (int i = 0; i <= iterations; i++) {
        int yfill = i * y;
        int xfill = (m - yfill) / x;
        int total = yfill + xfill * x;
        if (total > max && total <= m) {
            max = total;
        }
    }
    cout << max;
}