#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  int a = 10;
  int b = 15;
  cout << "a = " << a << ", b = " << b << endl;

  cout << "min(a, b) = " << min(a, b) << endl;
  cout << "max(a, b) = " << max(a, b) << endl;

  swap(a, b);
  cout << "swap(a, b) -> a =  " << a << ", b = " << b << endl;
}

void example_2(void) {
  vector<int> vec = {3, 9, 1, 5, 3, 7, 4};

  int i;
  cout << "vec = ";
  for (i = 0; i < vec.size(); i++) {
    cout << vec[i] << ", ";
  }
  cout << endl;

  sort(vec.begin(), vec.end());
  cout << "sort -> vec = ";
  for (i = 0; i < vec.size(); i++) {
    cout << vec[i] << ", ";
  }
  cout << endl;

  reverse(vec.begin(), vec.end());
  cout << "reverse -> vec = ";
  for (i = 0; i < vec.size(); i++) {
    cout << vec[i] << ", ";
  }
  cout << endl;
}

void test_1(void) {
  cout << "input 3 int: " << endl;
  int A, B, C;
  cin >> A >> B >> C;

  cout << max(max(A, B), C) - min(min(A, B), C) << endl;
}

int main(void) {
  example_1();
  example_2();
  test_1();

  return 0;
}

