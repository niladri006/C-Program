#include <stdio.h>
int maximum(int array[], int index, int len);
int minimum(int array[], int index, int len);

int main()
{

    int array[100], N, max, min;
    int i;

    printf("Enter Size of The Array : ");
    scanf("%d", &N);
    printf("Enter %d Elements In Array : ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    max = maximum(array, 0, N);
    min = minimum(array, 0, N);

    printf("\nMinimum Element In Array =   %d", min);
    printf("\nMaximum Element In Array =   %d\n", max);

    return 0;
}

int maximum(int array[], int index, int len)
{
    int max;

    if (index >= len - 2)
    {
        if (array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    max = maximum(array, index + 1, len);

    if (array[index] > max)
        return array[index];
    else
        return max;
}

int minimum(int array[], int index, int len)
{
    int min;

    if (index >= len - 2)
    {
        if (array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    min = minimum(array, index + 1, len);

    if (array[index] < min)
        return array[index];
    else
        return min;
}
