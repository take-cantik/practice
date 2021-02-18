#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  cout << "example 1" << endl;
  int a = 3;
  int &b = a;

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  b = 4;

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
}

void example_2(void) {
  cout << "example 2" << endl;
  
  int a = 123;
  int &b = a;
  int &c = b;

  b++;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;

  string s = "ahiahi";
  string &t = s;

  t.at(0) = 'A';
  t.at(1) = 'H';
  t.at(2) = 'I';

  cout << "s = " << s << endl;
  cout << "t = " << t << endl;

  vector<int> v = {1, 2, 3, 4, 5};
  vector<int> &w = v;
}

int g(int &x) {
  x *= 2;
  return x;
}

void example_3(void) {
  cout << "example 3" << endl;
  int a = 3;
  int b = g(a);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}

void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
  minimum = min(a, min(b, c));
  maximum = max(a, max(b, c));
}

void example_4(void) {
  cout << "example 4" << endl;
  int minimum, maximum;
  min_and_max(3, 1, 5, minimum, maximum);
  cout << "minimum = " << minimum << endl;
  cout << "maximum = " << maximum << endl;
}

int sum100(vector<int> &a) {
  int result = 0;
  for (int i = 0; i < 100; i++) {
    result += a.at(i);
  }
  return result;
}

void example_5(void) {
  cout << "example 5" << endl;
  vector<int> vec(1000000, 1);

  int i;
  for (i = 0; i < 500; i++) {
    cout << sum100(vec);
  }
  cout << endl;
}

void example_6(void) {
  cout << "example 6" << endl;
  vector<int> a = {1, 3, 2, 5};

  for (int x : a) {
    x *= 2;
  }

  for (int i = 0; i < a.size(); i++) {
    cout << a.at(i) << endl;
  } 

  for (int &x : a) {
    x *= 2;
  }

  for (int i = 0; i < a.size(); i++) {
    cout << a.at(i) << endl;
  } 
}

void saiten(vector<vector<int>> &A, int &correct_count, int &wrong_count) {
  int kuku;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (A.at(i).at(j) == (kuku = (i + 1) * (j + 1))) {
        correct_count++;
      } else {
        wrong_count++;
        A.at(i).at(j) = kuku;
      }
    }
  }
}

void test_1(void) {
  cout << "test_1" << endl;

  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }
  
  int correct_count = 0;
  int wrong_count = 0;

  saiten(A, correct_count, wrong_count);

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) {
        cout << " ";
      } else {
        cout << endl;
      }
    }
  }

  cout << correct_count << endl;
  cout << wrong_count << endl;

}

int main(void) {
  example_1();
  example_2();
  example_3();
  example_4();
  example_5();
  example_6();
  test_1();

  return 0;
}

