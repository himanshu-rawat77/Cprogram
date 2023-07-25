#include <stdio.h>

int main() {
  int n, i, rem, bin = 0, oct = 0, hex = 0;

  printf("Enter an integer: ");
  scanf("%d", &n);

  for (i = 1; n > 0; i *= 2) {
    rem = n % 2;
    bin += rem * i;
  }

  for (i = 1; n > 0; i *= 8) {
    rem = n % 8;
    oct += rem * i;
  }

  for (i = 1; n > 0; i *= 16) {
    rem = n % 16;
    if (rem < 10) {
      hex += rem * i;
    } else {
      hex += (rem - 10) + 'a';
    }
  }

  printf("Binary equivalent of %d is: %d\n", n, bin);
  printf("Octal equivalent of %d is: %d\n", n, oct);
  printf("Hexadecimal equivalent of %d is: %c\n", n, hex);

  return 0;
}
