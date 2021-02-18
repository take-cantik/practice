#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
  if (n == 0) {
    return 0;
  }

  int s = sum(n - 1);
  return s + n;
}

int sum_range(int a, int b) {
  if (a == b) {
    return a;
  }

  return sum_range(a, b - 1) + b;
}

int array_sum_from_i(vector<int> &data, int i) {
  if (i == data.size()) {
    return 0;
  }

  int s = array_sum_from_i(data, i + 1);
  return data.at(i) + s;
}

bool has_divisor(int N, int i) {
  if (i == N) {
    return false;
  }

  if (N % i == 0) {
    return true;
  }

  return has_divisor(N, i + 1);
}

bool is_prime(int N) {
  if (N == 1) {
    return false;
  } else if (N == 2) {
    return true;
  } else {
    return !has_divisor(N, 2);
  }
}

vector<int> reverse_array_from_i(vector<int> &data, int i) {
  if (i == data.size()) {
    vector<int> empty_array(0);
    return empty_array;
  }

  vector<int> tmp = reverse_array_from_i(data, i + 1);
  tmp.push_back(data.at(i));
  return tmp;
}

vector<int> reverse_array(vector<int> &data) {
  return reverse_array_from_i(data, 0);
}

void example_1(void) {
  cout << sum(2) << endl;
  cout << sum(3) << endl;
  cout << sum(10) << endl;

  cout << sum_range(0, 4) << endl;
  cout << sum_range(5, 8) << endl;

  vector<int> a = {0, 3, 9, 1, 5};
  cout << array_sum_from_i(a, 0) << endl;
  cout << array_sum_from_i(a, 2) << endl;

  cout << is_prime(1) << endl;
  cout << is_prime(2) << endl;
  cout << is_prime(12) << endl;
  cout << is_prime(13) << endl;
  cout << is_prime(57) << endl;

  vector<int> vec1 = {1, 2, 3, 4, 5};
  vector<int> vec2 = reverse_array(vec1);
  for (int i = 0; i < vec1.size(); i++) {
    cout << vec1.at(i);
  }
  cout << endl;
  for (int i = 0; i < vec2.size(); i++) {
    cout << vec2.at(i);
  }
  cout << endl;
}

int main(void) {
  example_1();

  return 0;
}

