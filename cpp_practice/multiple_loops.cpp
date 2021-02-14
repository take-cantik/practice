#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      cout << "i: " << i << ", j: " << j << endl;
    }
  }
}

void example_2(void) {
  int i, j, k;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 2; k++) {
        cout << "i: " << i << ", j: " << j << ", k: " << k << endl;
      }
    }
  }
}

void example_3(void) {
  cout << "input A(3), B(3)" << endl;

  vector<int> A(3), B(3);
  int i;
  for (i = 0; i < 3; i++) {
    cin >> A[i];
  }
  for (i = 0; i < 3; i++) {
    cin >> B[i];
  }

  bool answer = false;

  int j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (A[i] == B[j]) {
        answer = true;
        break;
      }
    }
    if (answer) {
      break;
    }
  }

  if (answer) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

void test_1(void) {
  cout << "入力" << endl;
  cout << "N S" << endl;
  cout << "A1 A2 ... AN" << endl;
  cout << "P1 P2 ... PN" << endl;

  int N, S;
  cin >> N >> S;

  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int count = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (A.at(i) + P.at(j) == S) {
        count++;
      }
    }
  }

  cout << count << endl;
}

int main(void) {
  example_1();
  example_2();
  example_3();
  test_1();

  return 0;
}

