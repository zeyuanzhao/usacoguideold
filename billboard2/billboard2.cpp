#include <cstdio>
#include <iostream>
using namespace std;

struct Rect {
  int x1, y1, x2, y2;
  int area() { return (x2 - x1) * (y2 - y1); }
};

int overlap(int x, int y, Rect s) {
  if (s.x1 <= x && s.x2 >= x && s.y1 <= y && s.y2 >= y) {
    return 1;
  } else {
    return 0;
  }
}

int intersectArea(Rect s1, Rect s2) {
  return (min(s1.x2, s2.x2) - max(s1.x1, s2.x1)) *
         (min(s1.y2, s2.y2) - max(s1.y1, s2.y1));
}

int main() {
  freopen("billboard.in", "r", stdin);
  freopen("billboard.out", "w", stdout);

  Rect s1, s2;
  cin >> s1.x1 >> s1.y1 >> s1.x2 >> s1.y2;
  cin >> s2.x1 >> s2.y1 >> s2.x2 >> s2.y2;

  int overlaps = overlap(s1.x1, s1.y1, s2) + overlap(s1.x2, s1.y1, s2) +
    overlap(s1.x1, s1.y2, s2) + overlap(s1.x2, s1.y2, s2);

  if (overlaps == 2) {
    cout << s1.area() - intersectArea(s1, s2);
  } else if (overlaps == 4) {
    cout << 0;
  }
  else {
    cout << s1.area();
  }
}