#include <stdio.h>
#include <stdlib.h>

// まずはどのくらい R99 をしみじみやっているかチェック。
// R99, p32, nth_prime() で利用する。
int is_prime(int n) {
  if (n<3) {
    return n==2;
  }
  if (n%2==0) {
    return 0;
  }
  int i;
  for (i=3; i*i<=n; i+=2) {
    if (n%i==0) {
      return 0;
    }
  }
  return 1;
}

// R99, p33, 下の is_square() から呼ばれる。
int is_square(int n){
  int i;
  for (i=0; i*i<n; i++) {
    ;
  }
  return i*i == n;
}

// R99, p35, q2() で利用する。
int is_square_sum(int n) {
  int i;

  for (i=0; i*i<=n; i++) {
    if (is_square(n - i*i)) {  // p33
      return 1;
    }
  }
  return 0;
}

// 新しく書くのはここから。上で定義した関数を組み合わせれば良い。

// found == n になるまでループ。
int nth_prime(int n) {
  int found = 0;
  int i = 0;

  for (;;) {
    if (is_prime(i)) {
      found++;
      if (found == n) {
        return i;
      }
    }
    i++;
  }
  return -1; // never comes here
}

// 日本語のまま。素数かつ二乗和である最初に見つかる整数 i。
int q2(void) {
  int i = 0;

  for (;;) {
    if (is_prime(i) && is_square_sum(i)) {
      return i;
    }
    i++;
  }
}

int main(void) {
  int sum;

  sum = nth_prime(1000) + nth_prime(2000);
  printf("答え: %i\n", sum);                         // 答え: 25308
  printf("最小の素数かつ二乗数の和となる数: %i\n", q2()); // 答え: 2
  return 0;
}
