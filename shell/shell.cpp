#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n;
    cin >> n;

    int a, b, g, x, y, z, p;
    x = 0;
    y = 0;
    z = 0;
    int s[3] = {1, 2, 3};
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> g;
        p = s[a-1];
        s[a-1] = s[b-1];
        s[b-1] = p;
        
        if (s[g-1] == 1) {
            x++;
        } else if (s[g-1] == 2) {
            y++;
        } else {
            z++;
        }
    }
    cout << max(x, max(y, z));
}