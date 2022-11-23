#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;
    cin >> n >> k;
    string word;
    int run = 0;
    int len = 0;
    for (int i = 0; i < n; i++) {
        cin >> word;
        len = word.length();
        if (word.length() + run> k) {
            cout << "\n";
            run = 0;
        } else if (i != 0) {
            word = " " + word;
        }
        cout << word;
        run += len;
    }
}