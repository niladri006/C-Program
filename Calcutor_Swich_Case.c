#include <stdio.h> // Header files.
#include <conio.h>
#include <math.h>

int main()
{
    float num1, num2;
    float result;
    char ch;

    printf("Enter The First Number: "); // Asking for 1st number Input.
    scanf("%f", &num1);

    printf("\nChoose Operation To Perform (+,-,x,/,%%):"); // Choose which operation do You want.
    scanf(" %c", &ch);

    printf("\nEnter The Second Number:"); // Asking for 2nd number Input.
    scanf("%f", &num2);

    result = 0;
    switch (ch)
    {
    case '+': // For A + B
        result = num1 + num2;
        break;

    case '-': // For A - B
        result = num1 - num2;
        break;

    case '*': // For A x B
        result = num1 * num2;
        break;

    case '/': // For A / B
        result = num1 / num2;
        break;

    case '%': // For A % B
        result = (int)num1 % (int)num2;
        break;

    default: // If you not seclect from above option than this value will print.
        printf("Invalid Operation.\n");
    }

    printf("\nResult: %f %c %f = %f\n", num1, ch, num2, result); // Outpur of your operation.
    return result;
}
