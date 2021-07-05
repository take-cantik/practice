#include <iostream>
using namespace std;

int count_guess_age(int age) {
  int from = 0;
  int to = 99;
  int half = (from + to) / 2;
  int count;

  for (count = 1;; count++) {
    if (age <= half) {
      to = half;
    } else {
      from = half + 1;
    }
    half = (from + to) / 2;

    if (to - from == 0) {
      break;
    }
  }

  // cout << half << endl;
  return count;
}

int main(void) {
  int A, count;
  int max = 0;
  
  for (int i = 0; i < 100; i++) {
    if (max < (count = count_guess_age(i))) {
      max = count;
    } 
  }

  cout << max << endl;

  return 0;
}
