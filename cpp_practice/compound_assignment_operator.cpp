#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  int x = 5;
  x += 1 + 2;

  cout << x << endl;
}

void example_2(void) {
  int a = 5;
  a -= 2;
  cout << a << endl;

  int b = 3;
  b *= 1 + 2;
  cout << b << endl;

  int c = 4;
  c /= 2;
  cout << c << endl;

  int d = 5;
  d %= 2;
  cout << d << endl;
}

void example_3(void) {
  int x = 5;
  x++;
  cout << x << endl;

  int y = 5;
  y--;
  cout << y << endl;
}

void test_1(void) {
  int x, a, b;
  cin >> x >> a >> b;

  x++;
  cout << x << endl;

  cout << (x *= (a + b)) << endl;
  cout << (x *= x) << endl;
  cout << --x << endl;
}

int main(void) {
  example_1();
  example_2();
  example_3();
  test_1();

  return 0;
}

