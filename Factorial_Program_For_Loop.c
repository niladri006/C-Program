#include <stdio.h>
#include <conio.h>

int main()
{
	int i, number, fact = 1;
	printf("enter a number (!): ");
	scanf("%d", &number);

	for (i = number; i >= 1; i--)
	{
		printf("  %d  ", i);
		fact = fact * i;
	}
	printf("\nfactorial of %d! is : %d", number, fact);
}
