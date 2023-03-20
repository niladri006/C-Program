#include <stdio.h>

int fact(int);

int main()
{
    int num, factorial;

    printf("Enter a number to calculate it's factorial :  \t");
    scanf("%d", &num);
    factorial = fact(num);
    printf("Factorial of the number (%d) = %d\n", num, factorial);
}

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return (f);
}
