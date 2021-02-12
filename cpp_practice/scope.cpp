#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  int x = 5;

  if (x == 5) {
    int y = 10;
    cout << x + y << endl;
  }

  cout << x << endl;
  // cout << y << endl;
}

void example_2(void) {
  int x = 10;

  if (x == 5) {
    int y = 10;
    cout << x + y << endl;
  }

  if (x == 10) {
    string y = "hello";
    cout << x << y << endl;
  }
}

void example_3(void) {
  int x = 5;
  cout << x << endl;

  if (x == 5) {
    cout << x << endl;

    string x = "hello";
    cout << x << endl;
  }

  cout << x << endl;
}

void test_1(void) {
  int pattern;
  cin >> pattern;
  
  string text;
  if (pattern == 2) {
    cin >> text;
  }

  int price, N;
  cin >> price >> N;

  if (pattern == 2) {
    cout << text << "!" << endl;
  }

  cout << N * price << endl;
}

int main(void) {
  example_1();
  example_2();
  example_3();
  test_1();

  return 0;
}

