#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> p(n);
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int avg = 0;
            for (int k = i; k <= j; k++) {
                avg += p[k];
            }
            for (int k = i; k <= j; k++) {
                if (p[k] * (j - i + 1) == avg) {
                    total++;
                    break;
                }
            }
        }
    }
    cout << total;
}