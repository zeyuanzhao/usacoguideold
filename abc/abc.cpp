#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[7];
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    int abc = arr[6];
    int a = arr[0];
    int b = arr[1];
    int c;
    for (int i = 2; i < 6; i++) {
        if (arr[i] + a + b == abc) {
            c = arr[i];
        }
    }
    cout << a << " " << b << " " << c;
}