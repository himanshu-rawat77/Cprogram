#include <stdio.h>

int main() {
  int i, n, sum, digit;

  for (i = 1; i <= 10000; i++) {
    sum = 0;
    n = i;
    while (n > 0) {
      digit = n % 10;
      sum += digit * digit * digit;
      n /= 10;
    }

    if (sum == i) {
      printf("%d\n", i);
    }
  }

  return 0;
}
