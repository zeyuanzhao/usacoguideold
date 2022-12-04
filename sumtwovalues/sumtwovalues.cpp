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
            found = true;
            cout << x.second << " " << m[t - x.first] << endl;
            m.erase(x.first);
            m.erase(t - x.first);
        }
    }
    if (!found) {
        cout << "IMPOSSIBLE" << endl;
    }

}