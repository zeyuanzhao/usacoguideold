#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (num % 2) {
            odd++;
        } else {
            even++;
        }
    }
}