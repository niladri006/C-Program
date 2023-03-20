#include <stdio.h>
double arr[100];
int n;
int readarr(void)
{
    printf("Enter Array Elements : ");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
    }
}
int findmean(void)
{
    double sum = 0, mean;
    int j;
    for (j = 0; j < n; j++)
    {
        sum += arr[j];
    }
    mean = sum / n;
    printf("\nMean=%lf\n", mean);
}
int sort(void)
{
    double temp;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nThe Sorted Elements are : \t");
    for (i = 0; i < n; i++)
    {
        printf("%lf\t", arr[i]);
    }
}
void range(void)
{
    double max;
    max = arr[n - 1];
    double min;
    min = arr[0];
    double res;
    res = max - min;
    printf("\n\nRange=%lf\n", res);
}
void median(void)
{
    double res;
    double a, b;
    a = arr[n / 2];
    b = arr[n / 2 - 1];
    if (n % 2 == 0)
    {
        res = (a + b) / 2;
    }
    else
        res = arr[n / 2];
    printf("\nThe Median is %lf\n", res);
}
int mode(int n)
{
    int cnt = 0, i, pos;
    double mode;
    int m;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            mode = arr[i];
            pos = i;
            cnt++;
        }
    }
    m = n - i;
    while (m != 0)
    {
    }
    printf("Moden%lf", mode);
    return m;
}
int main()
{
    printf("Enter the Number of Entriesn : ");
    scanf("%d", &n);
    readarr();
    findmean();
    sort();
    range();
    median();
    mode(n);
}
