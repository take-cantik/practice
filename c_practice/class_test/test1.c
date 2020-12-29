#include <stdio.h>
#include <stdlib.h>

int min(int x, int y) {
  if (x < y) {
    return x;
  } else {
    return y;
  }
}

int gcd(int x, int y) {
  int i;
  int ret = 1;

  // < じゃなくて <= だった。 < でも丸をつける。
  for (i = 1; i<= min(x, y); i++) {
    if ((x % i == 0) && (y % i ==0)) {
      ret = i;
    }
  }
  return ret;
}

void plus(int x[], int y[]) {
  int n; // 分子
  int d; // 分母
  int g;

  n = x[0]*y[1] + x[1]*y[0];
  d = x[1]*y[1];
  g = gcd(n, d);
  printf("%i/%i\n", n/g, d/g);
}

int main(void) {
  int x[2];
  int y[2];

  printf("input n1/m1 ");
  scanf("%i/%i", &x[0], &x[1]);

  printf("input n2/m2 ");
  scanf("%i/%i", &y[0], &y[1]);

  plus(x, y);
  return 0;
}
