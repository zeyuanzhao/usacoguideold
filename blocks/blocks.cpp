#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main() {
    freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);
    int n; cin >> n;
    vector<int> letters(26);
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        vector<int> arr1(26);
        vector<int> arr2(26);
        for (char c : s1) arr1[c - 'a']++;
        for (char c : s2) arr2[c - 'a']++;
        for (int i = 0; i < 26; i++) {
            letters[i] += max(arr1[i], arr2[i]);
        }
    }
    for (int i : letters) cout << i << "\n";
}