#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  cout << (5 < 10) << endl;
  cout << (5 > 10) << endl;
}

void example_2(void) {
  if (1) {
    cout << "Hello" << endl;
  }

  if (0) {
    cout << "World" << endl;
  }
}

void example_3(void) {
  if (true) {
    cout << "Hello" << endl;
  }

  if (false) {
    cout << "World" << endl;
  }
}

void example_4(void) {
  int x;
  cin >> x;

  bool a = true;
  bool b = x < 10;
  bool c = false;

  if (a && b) {
    cout << "Hello" << endl;
  }
  if (c) {
    cout << "World" << endl;
  }
}

void example_5(void) {
  bool a = 10;
  bool b = 0;
  cout << a << endl;
  cout << b << endl;

  if (100) {
    cout << "Hello" << endl;
  }
}

void test_1(void) {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true; // true または false
  bool b = false; // true または false
  bool c = true; // true または false
 
  // ここから先は変更しないこと
 
  if (a) {
    cout << "At";
  }
  else {
    cout << "Yo";
  }
 
  if (!a && b) {
    cout << "Bo";
  }
  else if (!b || c) {
    cout << "Co";
  }
 
  if (a && b && c) {
    cout << "foo!";
  }
  else if (true && false) {
    cout << "yeah!";
  }
  else if (!a || c) {
    cout << "der";
  }
 
  cout << endl;
}

int main(void) {
  example_1();
  example_2();
  example_3();
  example_4();
  example_5();
  test_1();

  return 0;
}

