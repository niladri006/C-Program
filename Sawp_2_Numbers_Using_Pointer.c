#include <stdio.h>
int main()
{
   int x, y, *a, *b, temp;

   printf("Enter the value of  X :  ");
   scanf("%d", &x);

   printf("Enter the value of  Y :  ");
   scanf("%d", &y);

   printf("\nBefore Swapping\n X = %d\t Y = %d\n", x, y);

   a = &x;
   b = &y;

   temp = *b;
   *b = *a;
   *a = temp;

   printf(" \nAfter Swapping\n X = %d\t Y = %d\n", x, y);
   return 0;
}
