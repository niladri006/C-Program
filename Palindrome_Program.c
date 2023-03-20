#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, n, c = 0;
    printf("\nEnter Your Word To Check Palindrome.\n");
    printf("\nEnter The String Word : \t");
    gets(s);
    n = strlen(s);
    strupr(s);
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
            c++;
    }
    if (c == i)
        printf("\nYour String %s is PALINDROME.", s);
    else
        printf("\nString %s is not PALINDROME.", s);
    return 0;
}
