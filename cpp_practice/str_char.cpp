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

int main(void) {
  example_1();
  example_2();
  example_3();

  return 0;
}

