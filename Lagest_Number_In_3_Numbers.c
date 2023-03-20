#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c, large;
	printf("Enter any three number :");
	scanf("%d%d%d", &a, &b, &c);
	large = a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("Largest Number is: %d", large);
	return 0;
}
