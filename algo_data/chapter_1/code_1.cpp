#include <iostream>
using namespace std;

int main(void) {
  int A;
  int from, to, half;
  int ans;

  for (;;) {
    cout << "input 20 <= A < 36" << endl;
    cin >> A;

    if (A >= 20 && A < 36) {
      break;
    }
  }

  from = 20;
  to = 35;
  half = (from + to) / 2;

  for (;;) {
    if (A <= half) {
      to = half;
    } else {
      from = half + 1;
    }
    ans = half;
    half = (from + to) / 2;
    
    // cout << "from: " << from << ", to: " << to << ", half: " << half << ", ans: " << ans << endl;

    if (to - from == 0) {
      ans = half;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
