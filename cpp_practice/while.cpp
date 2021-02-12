#include <bits/stdc++.h>
using namespace std;

void helloworld_loop(void) {
  while (true) {
    cout << "Hello" << endl;
    cout << "AtCoder" << endl;
  }
}

void example_1(void) {
  int i = 1;

  while (true) {
    cout << i << endl;
    i++;
  }
}

void example_2(void) {
  int i = 1;

  while (i <= 5) {
    cout << i << endl;
    i++;
  }
}

void example_3(void) {
  int i = 0;

  while (i < 5) {
    cout << i << endl;
    i++;
  }
}

void example_4(void) {
  int N;
  cin >> N;

  int sum = 0;
  int x;
  int i = 0;

  while (i < N) {
    cin >> x;
    sum += x;
    i++;
  }

  cout << sum << endl;
}

void example_5(void) {
  int i = 0;

  while (i < 10) {
    cout << i << endl;
    i += 2;
  }
}

void example_6(void) {
  int i = 5;

  while (i >= 0) {
    cout << i << endl;
    i--;
  }
}

void test_1(void) {
  int A, B;
  cin >> A >> B;

  int i = 0;
  cout << "A:";
  while (i < A) {
    cout << "]";
    i++;
  }
  cout << endl;

  int j = 0;
  cout << "B:";
  while (j < B) {
    cout << "]";
    j++;
  }
  cout << endl;
}

int main(void) {
  // 無限ループ
  // helloworld_loop();
  // example_1();

  example_2();
  example_3();
  example_4();
  example_5();
  example_6();
  test_1();

  return 0;
}

