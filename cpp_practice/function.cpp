#include <bits/stdc++.h>
using namespace std;

int my_min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

// プロトタイプ宣言
void hello(string);

// 参照
void change(int &n, vector<int> &vec) {
  n = 1;
  vec.at(0);
  return;
}

// 再帰関数
int sum(int n) {
  if (n == 0) {
    return 0;
  }

  return n + sum(n - 1);
}

// 以下testの関数
int sum(vector<int> scores) {
  int i;
  int sum = 0;
  for (i = 0; i < scores.size(); i++) {
    sum += scores[i];
  }

  return sum;
}

void output(int sum_a, int sum_b, int sum_c) {
  cout << sum_a * sum_b * sum_c << endl;
}

vector<int> input(int N) {
  vector<int> vec(N);
  int i;
  for (i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  return vec;
}

void test_1(void) {
  int N;
  cin >> N;

  vector<int> A = input(N);
  vector<int> B = input(N);
  vector<int> C = input(N);

  int sum_A = sum(A);
  int sum_B = sum(B);
  int sum_C = sum(C);

  output(sum_A, sum_B, sum_C);
}


int main(void) {
  int a = 10;
  int b = 15;

  cout << my_min(a, b) << endl;
  hello("World!");

  int x = 5;
  vector<int> v = {10, 10, 10};

  change(x, v);

  cout << x << endl;
  cout << v.at(0) << endl;

  cout << sum(5) << endl;

  cout << "テスト入力" << endl;
  cout << "N" << endl;
  cout << "A1, A2, A3, ..., AN" << endl;
  cout << "B1, B2, B3, ..., BN" << endl;
  cout << "C1, C2, C3, ..., CN" << endl;
  test_1();

  return 0;
}

void hello(string text) {
  cout << "Hello, " << text << endl;
  return;
}

