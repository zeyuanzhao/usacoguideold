#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> buckets(1001, 0);

    int s, t, b;
    for (int i = 0; i < n; i++) {
        cin >> s >> t >> b;
        for (int j = s; j < t; j++) {
            buckets[j] += b;
        }
    }

    cout << *max_element(buckets.begin(), buckets.end()) << endl;
}