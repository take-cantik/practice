#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  int i;
  for (i = 0; i < 3; i++) {
    cout << "Hello for:" << i << endl;
  }
}

void example_2(void) {
  int i;
  for (i = 0; i < 5; i++) {
    if (i == 3) {
      cout << "抜ける" << endl;
      break;
    }

    cout << i << endl;
  }

  cout << "終了" << endl;
}

void example_3(void) {
  int i;
  for (i = 0; i < 5; i++) {
    if (i == 3) {
      cout << "飛ばす" << endl;
      continue;
    }

    cout << i << endl;
  }

  cout << "終了" << endl;
}

void example_4(void) {
  int i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      cout << "i:" << i << ", j:" << j << endl;
    }
  }

  cout << "終了" << endl;
}

void test_1(void) {
  int N, A;
  cin >> N >> A;

  int i, B;
  string op;
  for (i = 0; i < N; i++) {
    cin >> op >> B;
    if (op == "+") {
      A += B;
    }
    if (op == "-") {
      A -= B;
    }
    if (op == "*") {
      A *= B;
    }
    if (op == "/") {
      if (B == 0) {
        cout << "error" << endl;
        break;
      }
      A /= B;
    }

    cout << i + 1 << ":" << A << endl;
  }
}

int main(void) {
  example_1();
  example_2();
  example_3();
  example_4();
  test_1();

  return 0;
}

