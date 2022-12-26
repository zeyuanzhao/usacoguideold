#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    int n; cin >> n;
    vector<int> paper(n+1, 0);
    vector<int> scissors(n+1, 0);
    vector<int> hoof(n+1, 0);
    for (int i = 1; i <= n; i++) {
        char move;
        cin >> move;
        paper[i] = paper[i-1];
        scissors[i] = scissors[i-1];
        hoof[i] = hoof[i-1];
        if (move == 'P') paper[i]++;
        else if (move == 'S') scissors[i]++;
        else if (move == 'H') hoof[i]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int before = max(max(paper[i], scissors[i]), hoof[i]);
        int after = max(max(paper[n] - paper[i-1], scissors[n] - scissors[i-1]), hoof[n] - hoof[i-1]);
        ans = max(ans, before+after);
    }
    cout << ans;

}