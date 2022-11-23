#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    map<int, int> limit;
    map<int, int> speed;
    int p, q, s;
    s = 0;
    p = 0;
    q = 0;
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
        limit.insert(pair<int, int>(s, q));
        s += p;
    }
    s = 0;
    p = 0;
    q = 0;
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
        speed.insert(pair<int, int>(s, q));
        s += p;
    }
    int road, car;
    int highest = 0;
    for (int i = 0; i < 100; i++) {
        if (limit.count(i)) {
            road = limit.find(i)->second;
        }
        if (speed.count(i)) {
            car = speed.find(i)->second;
        }
        highest = max(car - road, highest);
    }
    cout << highest;
}