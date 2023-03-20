#include <stdio.h>
int main()
{
	float a, b, c;
	printf("Enter first number :");
	scanf("%f", &a);
	printf("Enter second number :");
	scanf("%f", &b);
	c = a;
	c = b;
	b = c;
	printf("\nAfter swapping, first nuber = %f\n", a);
	printf("\nAfter swapping, second number = %f\n", b);
	return 0;
}
