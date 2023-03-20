#include <stdio.h>
#include <stdlib.h>
int main()
{
	int array[10000], n, i;
	printf("Enter the Desimal number to convert into Binary: ");
	scanf("%d", &n);
	for (i = 0; n > 0; i++)
	{
		array[i] = n % 2;
		n = n / 2;
	}
	printf("\nBinary of Given Number is = ");
	for (i = i - 1; i >= 0; i--)
	{
		printf("%d", array[i]);
	}
	return 0;
}
