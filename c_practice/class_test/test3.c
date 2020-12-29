#include <stdio.h>
#include <stdlib.h>

#define LEN 8

void p(int x[]) {
  int i;
  for (i=0; i<LEN; i++) {
    printf("%i ", x[i]);
  }
  printf("\n");
}

int pow10(int n) {
  if (n==0) {
    return 1;
  } else {
    return 10 * pow10(n-1);
  }
}

// 整数 n の各桁を要素とする配列 x[] を作る。
void to_array(int n, int x[]) {
  int i;
  int p = pow10(LEN-1);

  for (i=0; i<LEN; i++) {
    x[i] = n / p;
    n %= p;
    p /=10;
  }
}

// 配列 x[] を逆転させた配列 y[] を作る。
void reverse(int x[], int y[]) {
  int i;
  int j = LEN-1;

  for (i=0; i<LEN; i++) {
    y[j-i] = x[i];
  }
}

//配列 x[] と 配列 y[] の要素は全て同じか？
int eq(int x[], int y[]) {
  int i;

  for (i=0; i<LEN; i++) {
    if (x[i] != y[i]) {
      return 0;
    }
  }
  return 1;
}

// n は 8 桁の整数か？
int has_eight_digits(int n) {
  return 10000000 <= n && n < 100000000;
}

int palindrome(int n) {
  int x[LEN];
  int y[LEN];

  to_array(n, x);
  reverse(x, y);
  return eq(x, y);
}


int main(void) {
  int n;

  scanf("%i", &n);
  if (! has_eight_digits(n)) {
    printf("8桁の整数に限る\n");
  } else {
    printf("%i\n", palindrome(n));
  }
  return 0;
}

