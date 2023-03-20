#include <stdio.h>
#include <conio.h>
int main()
{
	printf("WELLCOME!!! HEAR YOU GET SUBTRACTION OF YOUR TWO NUMBERS.\n");

	float a;
	float b;

	printf("Enter Your First Number :");
	scanf("%f", &a);

	printf("Enter Your Second Number :");
	scanf("%f", &b);

	float c = a - b;
	printf("Your Result is : %f - %f = %f \n", a, b, c);

	printf("HAVE A GOODD DAY ^_^ ");
	return 0;
}
