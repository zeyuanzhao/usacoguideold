#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char> dir(n);
    vector<int> pos(n);

    for (int i = 0; i < n; i++) {
        cin >> dir[i];
        cin >> pos[i];
    }
    int liars = 10000;
    for (int bes : pos) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (dir[i] == 'G' && bes < pos[i]) {
                count++;
            } else if (dir[i] == 'L' && bes > pos[i]) {
                count++;
            }
        }
        liars = min(liars, count);
    }
    cout << liars << endl;
}
