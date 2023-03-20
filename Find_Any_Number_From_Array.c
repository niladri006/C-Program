#include <stdio.h>
int main()
{
	int arr[100];
	int n, i, search, found;
	int *fd = &found;
	printf("Enter Size of Array : ");
	scanf("%d", &n);
	printf("Enter Elements in Array : ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nEnter element to search: ");
	scanf("%d", &search);
	*fd = 1;
	for (i = 0; i < n; i++)
	{
		if (arr[i] = search)
		{
			*fd = 1;
			break;
		}
	}
	if (*fd == 1)
	{
		printf("%d is found at %d position.", search, sizeof(i + 1));
	}
	else
	{
		printf("%d is not Found.", search);
	}
	return 0;
}
