#include <stdio.h>

int main() 
{
  int age[5], i, sum = 0, count = 0;

  for (i = 0; i < 5; i++) 
  {
    printf("Enter the age of student %d: ", i + 1);
    scanf("%d", &age[i]);

    if (age[i] == 0) 
    {
      i--;
      continue;
    }

    sum += age[i];
    count++;
  }

  if (count > 0) {
    printf("Average age is: %.2f\n", (float)sum / count);
  } else {
    printf("No valid ages entered.\n");
  }

  return 0;
}
