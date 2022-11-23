#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    int barn[2];
    int rock[2];
    int lake[2];

    string t;
    for (int i = 0; i < 10; i++) {
        cin >> t;
        for (int j = 0; j < 10; j++) {
            switch (t[j]) {
                case 'B':
                    barn[0] = j;
                    barn[1] = i;
                    break;
                case 'R':
                    rock[0] = j;
                    rock[1] = i;
                    break;
                case 'L':
                    lake[0] = j;
                    lake[1] = i;
                    break;
            }
        }
    }
    
    int d = abs(barn[0]-lake[0]) + abs(barn[1]-lake[1]) - 1;
    if (barn[0] == rock[0] && rock[0] == lake[0] && (barn[1] < rock[1] == rock[1] < lake[1]) || barn[1] == rock[1] && rock[1] == lake[1] && (barn[0] < rock[0] == rock[0] < lake[0])) {
        d += 2;
    }
    cout << d;
}