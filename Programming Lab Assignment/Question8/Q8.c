#include <stdio.h>

int main() {
  int n, i, count_pos = 0, count_neg = 0, count_zero = 0;
  int arr[100];

  printf("Enter the number of numbers: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);

    if (arr[i] > 0) {
      count_pos++;
    } else if (arr[i] < 0) {
      count_neg++;
    } else {
      count_zero++;
    }
  }

  printf("Number of positive numbers: %d\n", count_pos);
  printf("Number of negative numbers: %d\n", count_neg);
  printf("Number of zeroes: %d\n", count_zero);

  return 0;
}
