#include <stdio.h>

int main()
{
    int a[100], i, n, pos;

    printf("\nEnter no of elements : ");
    scanf("%d", &n);

    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements of array are : \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("\nEnter the number of Array which you want to  delete :  ");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    printf("\nOn Deletion, new array we get is : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d  ", a[i]);
    }
    return i;
}
