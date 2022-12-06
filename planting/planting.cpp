#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main() {
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);
    int n; cin >> n;
    map<int, int> fields;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        fields[a]++;
        fields[b]++;
    }
    int highest = 0;
    for (auto i : fields) {
        highest = max(i.second, highest);
    }
    cout << highest + 1;
}