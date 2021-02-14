#include <bits/stdc++.h>
using namespace std;

void example_1(void) {
  string str;
  str = "abcd";

  cout << str.at(0) << endl;
  cout << str.size() << endl;

  vector<int> vec;
  vec = { 25, 100, 64 };

  cout << vec.at(0) << endl;
  cout << vec.size() << endl;
}

void example_2(void) {
  vector<int> vec(3);

  cout << "input 3 num: ";
  cin >> vec.at(0) >> vec.at(1) >> vec.at(2);

  cout << "sum = " << vec.at(0) + vec.at(1) + vec.at(2) << endl;
}

void example_3(void) {
  vector<int> vec(100);

  cout << "input 100 num: ";

  int i;
  for (i = 0; i < 100; i++) {
    cin >> vec.at(i);
  }

  int sum = 0;
  for (i = 0; i < 100; i++) {
    sum += vec.at(i);
  }

  cout << sum << endl;
}

void example_4(void) {
  cout << "入力" << endl;
  cout << "N" << endl;
  cout << "1人目の数学の点数 2人目の数学の点数 ...N人目の数学の点数" << endl;
  cout << "1人目の英語の点数 2人目の英語の点数 ...N人目の英語の点数" << endl;

  int N;
  cin >> N;

  vector<int> math_point(N);
  vector<int> english_point(N);

  int i;
  for (i = 0; i < N; i++) {
    cin >> math_point.at(i);
  }
  for (i = 0; i < N; i++) {
    cin >> english_point.at(i);
  }

  for (i = 0; i < N; i++) {
    cout << math_point.at(i) + english_point.at(i) << endl;
  }
}

void example_5(void) {
  vector<int> vec = { 1, 2, 3 };

  vec.push_back(10);

  int i;
  for (i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}

void example_6(void) {
  vector<int> vec = { 0, 1, 2 };
  int arr[3] = { 0, 1, 2 };
  array<int, 3> data = { 0, 1, 2 };

  int i;
  for (i = 0; i < 3; i++) {
    cout << vec.at(i) << endl;
    cout << vec[i] << endl;
    // cout << arr.at(i) << endl;
    cout << arr[i] << endl;
    cout << data.at(i) << endl;
    cout << data[i] << endl;
  }
}

void example_7(void) {
  vector<int> vec = { 1, 2, 3 };
  vec.pop_back();

  int i;
  for (i = 0; i < vec.size(); i++) {
    cout << vec[i] << endl;
  }
}

void example_8(void) {
  vector<int> vec1 = { 1, 2, 3 };
  vector<int> vec2 = { 1, 2, 3 };

  // 比較可能
  if (vec1 == vec2) {
    cout << "OK" << endl;
  }
}

void example_9(void) {
  // 要素数3, 初期値10
  vector<int> vec(3, 10); //  == { 10, 10, 10 }

  vec = vector<int>(100, 2); // { 2, 2, 2, 2, ...., 2, 2 } で上書き

  cout << vec.at(99) << ", " << vec[99] << endl;
}

void test_1(void) {
  cout << "入力" << endl;
  cout << "N" << endl;
  cout << "A1, A2, A3, ..., AN" << endl;

  int N;
  cin >> N;

  vector<int> point(N);
  int i;
  int ave = 0;
  for (i = 0; i < N; i++) {
    cin >> point.at(i);
    ave += point.at(i);
  }
  ave /= N;

  int difference;
  for (i = 0; i < N; i++) {
    if ((difference = point.at(i) - ave) < 0) {
      difference *= -1;
    }
    cout << difference << endl;
  }
}

int main(void) {
  example_1();
  example_2();
  // 多いので割愛
  // example_3();
  example_4();
  example_5();
  example_6();
  example_7();
  example_8();
  example_9();
  test_1();

  return 0;
}

