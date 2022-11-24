#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    vector<int> y(n);
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int distance = pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2);
            if (distance > max) {
                max = distance;
            }
        }
    }

    cout << max << endl;
}