#include <stdio.h>

int main() {
  int side1, side2, side3;

  printf("Enter the three sides of a triangle: ");
  scanf("%d %d %d", &side1, &side2, &side3);

  if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
    printf("The triangle is valid.\n");
  } else {
    printf("The triangle is not valid.\n");
  }

  return 0;
}
