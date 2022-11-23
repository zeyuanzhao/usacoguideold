#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    int m[3];
    int b[3];

    cin >> b[0] >> m[0] >> b[1] >> m[1] >> b[2] >> m[2];

    int pour;
    int bpos, mpos;
    for (int i = 0; i < 100; i++) {
        bpos = (i + 1) % 3;
        mpos = i % 3;
        pour = min(m[mpos], b[bpos] - m[bpos]);
        m[mpos] -= pour;
        m[bpos] += pour;
    }
    for (int i : m) {
        cout << i << endl;
    }
}