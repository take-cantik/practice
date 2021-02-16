#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  cout << "example 1" << endl;
  int a = 3;
  int &b = a;

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  b = 4;

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
}

void example_2(void) {
  cout << "example 2" << endl;
  
  int a = 123;
  int &b = a;
  int &c = b;

  b++;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;

  string s = "ahiahi";
  string &t = s;

  t.at(0) = 'A';
  t.at(1) = 'H';
  t.at(2) = 'I';

  cout << "s = " << s << endl;
  cout << "t = " << t << endl;

  vector<int> v = {1, 2, 3, 4, 5};
  vector<int> &w = v;
}

int g(int &x) {
  x *= 2;
  return x;
}

void example_3(void) {
  int a = 3;
  int b = g(a);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}

void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
  minimum = min(a, min(b, c));
  maximum = max(a, max(b, c));
}

void example_4(void) {
  int minimum, maximum;
  min_and_max(3, 1, 5, minimum, maximum);
  cout << "minimum = " << minimum << endl;
  cout << "maximum = " << maximum << endl;
}

int main(void) {
  example_1();
  example_2();
  example_3();
  example_4();

  return 0;
}

