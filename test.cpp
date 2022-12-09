#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> arr) {
    arr.push_back(5);
    return 0;
}

int main() {
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    func(arr);
    for (auto i : arr) {
        cout << i;
    }
}