#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  int name;
  name = 10;

  cout << name << endl;
  cout << name + 2 << endl;
  cout << name * 3 << endl;
}

void example_2(void) {
  int i = 10;
  double d = 0.5;
  string s = "Hello";

  cout << i << endl;
  cout << d << endl;
  cout << s << endl;
}

void test_1(void) {
  // 一年の秒数
  int seconds = 365 * 24 * 60 * 60;
 
  /* 1年は何秒か */
  cout << seconds << endl;
  /* 2年は何秒か */
  cout << 2 * seconds << endl;
  /* 5年は何秒か */
  cout << 5 * seconds << endl;
  /* 10年は何秒か */
  cout << 10 * seconds << endl;
}

int main(void) {
  example_1();
  example_2();
  test_1();
  
  return 0;
}
