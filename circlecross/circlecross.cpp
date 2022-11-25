#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int main() {
    freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);

    vector<int> a(26, -1);
    vector<int> b(26, -1);
    string s;
    cin >> s;
    for (int i = 0; i < 52; i++) {
        if (a[s[i] - 'A'] == -1) a[s[i] - 'A'] = i;
        else b[s[i] - 'A'] = i;
    }
    int total = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            total += a[i] < a[j] && a[j] < b[i] && b[i] < b[j];
        }
    }
    cout << total << endl;
}