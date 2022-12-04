#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m;

    int n; cin >> n;
    int t; cin >> t;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        m[a] = i + 1;
    }
    bool found = false;
    for (const auto& x : m) {
        if (m.count(t - x.first)) {
            if (x.first == t - x.first || x.second == -1) {
                continue;
            }
            found = true;
            cout << x.second << " " << m[t - x.first] << endl;
            m[x.first] = -1;
            m[t - x.first] = -1;
        }
    }
    if (!found) {
        cout << "IMPOSSIBLE" << endl;
    }

}