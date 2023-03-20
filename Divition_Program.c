#include <stdio.h>
#include <conio.h>
int main()
{
	float a;
	float b;

	printf("Enter Your First Number: ");
	scanf("%f", &a);

	printf("Enter Your Second Number: ");
	scanf("%f", &b);

	float c = a / b;
	printf("Your Resut is: %f/%f = %f\n", a, b, c);

	return 0;
}
