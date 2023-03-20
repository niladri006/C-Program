#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space >= 1; space--)
        {
            printf("   ");
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}
