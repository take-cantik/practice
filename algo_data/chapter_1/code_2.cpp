#include <iostream>
using namespace std;

int count_guess_age(int age) {
  int from = 0;
  int to = 99;
  int half = (from + to) / 2;

  for (;;) {
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

  return half;
}

int main(void) {

  return 0;
}
