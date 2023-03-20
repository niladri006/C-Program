#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, discriminant, rt1, rt2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        rt1 = (-b + sqrt(discriminant)) / (2 * a);
        rt2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root1 = %.2lf and Root2 = %.2lf", rt1, rt2);
    }
    else if (discriminant == 0)
    {
        rt1 = rt2 = -b / (2 * a);
        printf("Root1 = Root2 =  %.2lf;", rt1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root1  = %.2lf + %.2lfi     \nRoot2  =  %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
