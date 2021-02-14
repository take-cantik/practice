#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  string str1, str2;
  cout << "input str: ";
  cin >> str1;
  str2 = ", World!";

  cout << str1 << str2 << endl;
}

void example_2(void) {
  string str = "Hello";
  cout << str << " 's len is " << str.size() << endl;
}

void example_3(void) {
  string str = "hello";
  cout << str << " 's 0 is " << str.at(0) << endl;
  cout << str << " 's 4 is " << str.at(4) << endl;
}

void example_4(void) {
  char c = 'a';
  cout << c << endl;
}

void example_5(void) {
  string str = "Hello";

  char c = str.at(0);

  cout << c << endl;
}

void example_6(void) {
  string str = "Hello";

  str.at(0) = 'M';
  cout << str << endl;

  if (str.at(1) == 'e') {
    cout << "AtCoder" << endl;
  }
}

void example_7(void) {
  string str;
  cout << "input str: ";
  cin >> str;

  int i;
  int count = 0;
  for (i = 0; i < str.size(); i++) {
    if (str.at(i) == 'O') {
      count++;
    }
  }

  cout << "Number of 'O' is " << count << endl;
}

void example_8(void) {
  string s1 = "ABC";
  string s2 = "ABC";
  string s3 = "XY";

  if (s1 == s2) {
    cout << "ABC == ABC" << endl;
  }

  if (s1 < s3) {
    cout << "ABC < XY" << endl;
  }
}

void example_9(void) {
  string hello = "Hello";

  cout << hello + ", world!" << endl;

  hello += ", AtCoder!";
  cout << hello << endl;
}

void example_10(void) {
  string str = "Hello";

  char c = str.at(0);
  cout << str + c << endl;
}

void example_11(void) {
  char a, b;
  cout << "input 2 char: ";
  cin >> a >> b;

  cout << a << endl;
  cout << b << endl;
}

void example_12(void) {
  cout << "エスケープシーケンス" << endl;

  cout << "\\n is 改行" << endl;
  cout << "\\\" is \"" << endl;
  cout << "\\\' is \'" << endl;
  cout << "\\\\ is \\" << endl;
  cout << "\\t is \'  \'" << endl;
  cout << "\\r is 復帰" << endl;
}

void example_13(void) {
  string s, t;
  cout << "input 2 lines str" << endl;
  getline(cin, s);
  getline(cin, t);

  cout << "1行目: " << s << endl;
  cout << "2行目: " << t << endl;
}

void test_1(void) {
  string S;
  cout << "test input" << endl;
  cin >> S;

  int i;
  int num = 1;
  for (i = 0; i < S.size(); i++) {
    if (i % 2 == 1) {
      if (S.at(i) == '+') {
        num++;
      } else if (S.at(i) == '-') {
        num--;
      }
    }
  }

  cout << num << endl;
}

int main(void) {
  cout << "input str" << endl;
  string s;
  getline(cin, s);
  cout << s << endl;

  example_1();
  example_2();
  example_3();
  example_4();
  example_5();
  example_6();
  example_7();
  example_8();
  example_9();
  example_10();
  example_11();
  example_12();
  example_13();
  test_1();

  return 0;
}

