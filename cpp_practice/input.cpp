#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  int a;

  cin >> a;

  cout << a << endl;
}

void example_2(void) {
  string s;
  double d;

  cin >> s;
  cin >> d;

  cout << s << "," << d << endl;
}

void example_3(void) {
  int a, b, c;

  cin >> a >> b >> c;
  cout << a * b * c << endl;
}

/*
  問題文
  2つの整数A,Bが与えられます。
  A+Bの計算結果を出力してください。
*/

void sum(void) {
  int a, b;

  cin >> a >> b;
  cout << a + b << endl;
}

int main(void) {
  example_1();
  example_2();
  example_3();
  sum();

  return 0;
}
