#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<long long> sums(n+1);
    partial_sum(begin(nums), end(nums), begin(sums) + 1);
    for (int i = 0; i < q; i++) {
        int r, l;
        cin >> l >> r;
        cout << sums[r] - sums[l] << endl;
    }
}