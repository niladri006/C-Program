#include <stdio.h>
int main()
{
	float a;
	float b;
	float c;

	printf("\nEnter Your First Number: ");
	scanf("%f", &a);

	printf("Enter Your Second Number: ");
	scanf("%f", &b);

	c = a + b;
	printf("Your Total Number is: %f + %f = %f \n", a, b, c);

	return 0;
}
