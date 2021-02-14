#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  cout << "input num: ";
  int a;
  cin >> a;
  
  cout << "input num of inputs num: ";
  vector<int> vec(5);
  int i;
  for (i = 0; i < vec.size(); i++) {
    cin >> vec.at(i);
  }

  int count = 0;
  for (i = 0; i < vec.size(); i++) {
    if (a == vec.at(i)) {
      count++;
    }
  }

  cout << count << endl;
}

void example_2(void) {
  vector<int> vec = {0, 1, 2, 3, 4, 5, 6};

  for (int x : vec) {
    cout << x << endl;
  }
}

void example_3(void) {
  vector<int> vec = {1, 3, 1, 2, 5, 10};

  for (int x : vec) {
    if (x == 1) {
      continue;
    }

    if (x == 5) {
      break;
    }

    cout << x << endl;
  }
}

void example_4(void) {
  string str = "Hello";

  for (char c : str) {
    if (c == 'l') {
      c = 'L';
    }
    cout << c;
  }
  cout << endl;
}

void example_5(void) {
  int N;
  cin >> N;

  int count = 0;
  while (N > 0) {
    if (N % 2 != 0) {
      break;
    }

    N /= 2;
    count++;
  }
  cout << count << endl;
}

void test_1(void) {
  vector<int> data(5);
  int i;
  for (i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  bool is_ok = false;
  for (i = 0; i < data.size() - 1; i++) {
    if (data.at(i) == data.at(i + 1)) {
      is_ok = true;
    }
  }

  if (is_ok) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
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

