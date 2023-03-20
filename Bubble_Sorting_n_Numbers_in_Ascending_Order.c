#include <stdio.h>
int main()
{
    int array[1000];
    int i, j, x, temp;
    printf("\n               <============================================>");
    printf("\n                SORTED TOUR NUMBERS IN ASCENDING ORDER");
    printf("\n               <============================================>");

    printf("\n\nEnter how many number :  ");
    scanf("%d", &x);
    printf("Enter the numbers :  ");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nINPUT ARRAY IS :  ");
    for (i = 0; i < x; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n\t\t&");
    /*   Bubble sorting begins */
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < (x - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("\nSORTED NUMBERS IN ASCENDING ORDER IS  :  ");
    for (i = 0; i < x; i++)
    {
        printf("%d  ", array[i]);
    }
}
