#include <stdio.h>
int main()
{
	int i, j, c;
	int arr[100] = {23, 45, 67, 78, 89, 12, 34, 92, 29, 2};

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[j] > arr[i])
			{
				c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
	printf("Printing sorted list :\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
