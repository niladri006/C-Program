#include <stdio.h>
#include <conio.h>
int main()
{
   float num1, num2, num3, num4, num5;
   printf("ENTER FIVE NUMBERS TO GET AVERAGE :");
   scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
   float avg = (num1 + num2 + num3 + num4 + num5) / 5;
   printf("THE AVERAGE IS :\t\t(%f+%f+%f+%f+%f)/5 =%f", num1, num2, num3, num4, num5, avg);
   return 0;
}
