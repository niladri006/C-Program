#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("Enter Your First Number :");
	scanf("%d", &a);
	printf("Enter Your Second Number :");
	scanf("%d", &b);
	float c = a * b;
	printf("Your Result is : %d * %d = %f", a, b, c);
	return c;
}
