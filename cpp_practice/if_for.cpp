#include <bits/stdc++.h>
using namespace std;

void print_bmi(void) {
  cout << "体重と身長を入力してください" << endl;
  double weight, height, bmi;
  cin >> weight >> height;

  cout << "BMIは" << (bmi = weight / (height * height)) << "です。" << endl;
  cout << "あなたは";

  if (bmi < 18) {
    cout << "痩せ型";
  } else if (bmi > 25) {
    cout << "肥満体型";
  } else {
    cout << "標準体型";
  }

  cout << "です。" << endl;
}

void example_1(void) {
  int x;
  cin >> x;

  if (x < 10) {
    cout << "xは10より小さい" << endl;
  }

  if (x >= 20) {
    cout << "xは20以上" << endl;
  }

  if (x == 5) {
    cout << "xは5" << endl;
  }

  if (x != 100) {
    cout << "xは100ではない" << endl;
  }

  cout << "終了" << endl;
}

void example_2(void) {
  int x, y;
  cin >> x >> y;

  if (!(x == y)) {
    cout << "xとyは等しくない" << endl;
  }

  if (x == 10 && y == 10) {
    cout << "xとyは10" << endl;
  }

  if (x == 0 || y == 0) {
    cout << "xかyは0" << endl;
  }

  cout << "終了" << endl;
}

void calculator(void) {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  } else if (op == "-") {
    cout << A - B << endl;
  } else if (op == "*") {
    cout << A * B << endl;
  } else if (op == "/") {
    if (B == 0) {
      cout << "error" << endl;
    } else {
      cout << A / B << endl;
    }
  } else {
    cout << "error" << endl;
  }
}

int main(void) {
  print_bmi();
  example_1();
  example_2();
  calculator();

  return 0;  
}

