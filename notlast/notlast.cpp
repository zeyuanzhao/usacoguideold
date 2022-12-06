#include <iostream>
#include <cstdio>
#include <map>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> raw;

    for (int i = 0; i < n; i++) {
        string cow; cin >> cow;
        int milk; cin >> milk;
        raw[cow] += milk;
    }

    vector<pair<int, string>> cows;
    for (auto t: raw) {
        cows.push_back({t.second, t.first});
    }
    sort(cows.begin(), cows.end());

    int point = 0;
    if (cows.size() == 7) {
        while( point < cows.size() && cows[point].first == cows[0].first) {
            point++;
        }
    }

    if (point < cows.size() && cows[point].first != cows[point+1].first) {
        cout << cows[point].second << endl;
    } else {
        cout << "Tie" << endl;
    }
}