#include <iostream>
#include <cstdio>
using namespace std;

struct Rect {
  unsigned long int x1, y1, x2, y2;
  unsigned long int area() {
    unsigned long int a = (x2 - x1) * (y2 - y1);
    return a;
  }
};

unsigned long int overlap(Rect a, Rect b) {
  Rect s;
  if (a.x1 >= b.x2 || a.x2 <= b.x1 || a.y1 >= b.y2 || a.y2 <= b.y1) { return 0; }
  unsigned long int x1 = max(a.x1, b.x1);
  s.x1 = x1;
  unsigned long int y1 = max(a.y1, b.y1);
  s.y1 = y1;
  unsigned long int x2 = min(a.x2, b.x2);
  s.x2 = x2;
  unsigned long int y2 = min(a.y2, b.y2);
  s.y2 = y2;
  unsigned long int area = s.area();
  return area;
}

int main() {
  freopen("white.in", "r", stdin);
  freopen("white.out", "w", stdout);

  Rect w;
  Rect b1;
  Rect b2;

  cin >> w.x1 >> w.y1 >> w.x2 >> w.y2;
  cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;
  cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;
  
  unsigned long int a = overlap(w, b1);
  unsigned long int b = overlap(w, b2);
  unsigned long int c = overlap(b1, b2);

  long int r = a + b - c;

  if (r < (long int) w.area()) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}