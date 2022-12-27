#include <bits/stdc++.h>
using namespace std;


int main() {
    map<string, int> zodiac = {
        {"Ox", 0},
        {"Tiger", 1},
        {"Rabbit", 2},
        {"Dragon", 3},
        {"Snake", 4},
        {"Horse", 5},
        {"Goat", 6},
        {"Monkey", 7},
        {"Rooster", 8},
        {"Dog", 9},
        {"Pig", 10},
        {"Rat", 11}
    };
    map<string, int> years;
    years["Bessie"] = 0;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        string tmp;
        string cowa;
        string cowb;
        string when;
        string animal;

        cin >> cowa >> tmp >> tmp >> when >> animal >> tmp >> tmp >> cowb;
        int year = years[cowb];
        int remainder;
        do {
            if (when == "previous") {
                year--;
            } else {
                year++;
            }
            remainder = (year < 0) ? (12 - ((-1 * year) % 12)) % 12 : (year % 12);
        } while (remainder != zodiac[animal]);
        years[cowa] = year;
        if (cowa == "Elsie") {
            break;
        }
    }

    cout << abs(years["Bessie"] - years["Elsie"]);
}