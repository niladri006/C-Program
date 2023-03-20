#include <stdio.h>
int main()
{
	printf("INPUT :-");
	int x, i, count = 0;
	printf("\nENTER A NUMBER: ");
	scanf("%d", &x);
	i = 1;
	while (i <= x)
	{
		if (x % i == 0)
		{
			count = count + 1;
			i++;
		}
		else
			i++;
	}
	printf("\n\nOUTPUT :-");
	if (count == 2)
	{
		printf("\n%d IS PRIME", x);
	}
	else
	{
		printf("\n%d IS NOT PRIME", x);
	}
	return 0;
}
