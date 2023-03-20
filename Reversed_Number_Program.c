#include <stdio.h>
int main()
{
  int a, reverse = 0, rem;
  printf("Enter a number: ");
  scanf("%d", &a);
  while (a != 0)
  {
    rem = a % 10;
    reverse = reverse * 10 + rem;
    a /= 10;
  }
  printf("Reversed Number: %d", reverse);
  return 0;
}
