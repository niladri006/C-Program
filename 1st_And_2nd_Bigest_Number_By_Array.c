#include<stdio.h>
int main()
{
	
	int i,n,largest,sec_largest;
	int a[100];
	printf("Enter the size of array : ");
	scanf(" %d",&n);
	printf("Enter the elements of an array : ");
	for (i=0; i<n; i++)
	{
		scanf(" %d",&a[i]);
	}
	largest=a[0];
	sec_largest=a[1];
	for (i=0; i<n; i++)
	{
		if (a[i]>largest)
		{
			sec_largest=largest;
			largest=a[i];
		}
		
		else if (a[i]>sec_largest && a[i]!=largest)
		{
			sec_largest=a[i];
		}
	}
	printf("largest= %d second largest=%d", largest, sec_largest);
	return 0;
}
