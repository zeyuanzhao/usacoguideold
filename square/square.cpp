#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

struct Corners {
    int bl_x, bl_y, tr_x, tr_y;
};

int main() {
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    Corners a, b;
    cin >> a.bl_x >> a.bl_y >> a.tr_x >> a.tr_y;
    cin >> b.bl_x >> b.bl_y >> b.tr_x >> b.tr_y;

    int x = max(a.tr_x, b.tr_x) - min(a.bl_x, b.bl_x);
    int y = max(a.tr_y, b.tr_y) - min(a.bl_y, b.bl_y);

    cout << pow(max(x, y), 2);
}