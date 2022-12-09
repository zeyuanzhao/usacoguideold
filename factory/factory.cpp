#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    int n; cin >> n;
    vector<int> out(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        out[a]++;
    }
    int answer = -1;
    for (int i = 1; i <= n; i++) {
        if (out[i]==0 && answer != -1 ) { answer = -1; break; } // found two sinks -- bad!
        if (out[i]==0) answer = i;  // found first sink; remember it
    }
    cout << answer << endl;
}