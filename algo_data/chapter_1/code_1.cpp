#include <iostream>
using namespace std;

int main(void) {
  int A;
  int from = 20;
  int to = 35;
  int half = (from + to) / 2;
  int ans;

  for (;;) {
    cout << "input 20 <= A < 36" << endl;
    cin >> A;

    if (A >= 20 && A < 36) {
      break;
    }
  }

  for (;;) {
    if (A <= half) {
      to = half;
    } else {
      from = half + 1;
    }
    half = (from + to) / 2;
    
    // cout << "from: " << from << ", to: " << to << ", half: " << half << ", ans: " << ans << endl;

    if (to - from == 0) {
      break;
    }
  }

  cout << half << endl;

  return 0;
}
