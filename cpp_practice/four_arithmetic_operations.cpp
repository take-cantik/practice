#include <bits/stdc++.h>
using namespace std;

/*
  問題文
  Aくんは
  1
  から
  100
  までの和を求めようと思いました。
  数学の授業で習ったとおり、
  1
  から
  100
  までの和は次の式で求められます。
  
  (1/2)×100×(100+1)
  
  この式の値を出力してください
*/

void print_sum_of_one_to_handred(void) {
  cout << 100 * (100 + 1) / 2 << endl;
}

int main(void) {
  cout << 1 + 2 << endl;
  cout << 3 - 2 << endl;
  cout << 4 * 2 << endl;
  cout << 6 / 2 << endl;
  cout << 7 % 2 << endl;

  cout << 1 + 2 * 3 << endl;
  cout << (1 + 2) * 3 << endl;

  print_sum_of_one_to_handred();

  return 0;
}
