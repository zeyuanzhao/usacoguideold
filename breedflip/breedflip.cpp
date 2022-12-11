#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    int n; cin >> n;
    string a;
    string b;
    cin >> a >> b;
    int flips = 0;
    bool flip = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            flip = false;
            continue;
        } else if(a[i] != b[i] && flip == false) {
            flips++;
            flip = true;
        }
    }
    cout << flips;
}