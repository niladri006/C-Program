#include <stdio.h>
int main()
{
    int c, n;
    int cube(int);
    printf("Enter a no :  \t");
    scanf("%d", &n);
    c = cube(n);
    printf("Cube of a no. is =  %d", c);
}
int cube(int n)
{
    int c = n * n * n;
    return (c);
}
