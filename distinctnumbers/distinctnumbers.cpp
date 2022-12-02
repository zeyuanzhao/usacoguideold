#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    int c = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!count(a.begin(), a.end(), x)) {
            a.push_back(x);
            c++;
        }
    }
    cout << c;
}