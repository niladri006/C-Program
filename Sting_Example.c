#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[100];
    char str1[100];
    int opt, len;
    printf("\n\n MAIN MENU");
    printf("\n    1. Convert string into upper case");
    printf("\n    2. Reverse the string");
    printf("\n    3. Copy one string into another string");
    printf("\n    4. Count length of string");

    printf("\n\n Enter string ?\t");
    scanf("%s", &str);
    printf("\n Enter your choice ?\t");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        strupr(str);
        printf("The string in uppercase is :%s", str);
        break;

    case 2:
        strrev(str);
        printf("The reverse of string is : %s", str);
        break;

    case 3:
        strcpy(str1, str);
        printf("New copied string is : %s", str1);
        break;

    case 4:
        len = strlen(str);
        printf(" The length of the string is : %d", len);
        break;

    default:
        printf("You have entered a wrong choice.");
    }

    return 0;
}
